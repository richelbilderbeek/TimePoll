//---------------------------------------------------------------------------
/*
TimePoll, time polling server
Copyright (C) 2011-2015 Richel Bilderbeek

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/
//---------------------------------------------------------------------------
//From http://www.richelbilderbeek.nl/ToolTimePoll.htm
//---------------------------------------------------------------------------
#ifndef TIMEPOLLWTMAINDIALOG_H
#define TIMEPOLLWTMAINDIALOG_H

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#pragma GCC diagnostic ignored "-Wunused-but-set-parameter"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#include <Wt/WContainerWidget>

#include <boost/scoped_ptr.hpp>

#include "wtserverpusherclient.h"
#include "wttimedserverpusherclient.h"
#pragma GCC diagnostic pop

namespace Wt
{
  //namespace Chart { struct WCartesianChart; }
  struct WButtonGroup;
  struct WLabel;
}

namespace ribi {
namespace ToolTimePoll {

///TimePoll its main dialog
struct WtTimePollMainDialog
  : public Wt::WContainerWidget, WtServerPusherClient, WtTimedServerPusherClient
{
  WtTimePollMainDialog();

  private:
  ///The user interface
  struct Ui
  {
    Ui()
      : //m_chart(0),
        m_label1(0), m_label2(0), m_label3(0), m_group(0) {}
    //Wt::Chart::WCartesianChart * m_chart;
    Wt::WLabel * m_label1;
    Wt::WLabel * m_label2;
    Wt::WLabel * m_label3;
    Wt::WButtonGroup * m_group;
  } ui;

  ///Change the index of the radiogroup
  void OnChangeIndex();

  ///Show me
  void ShowMain();


  ///Event triggered by WtServerPusher
  void OnServerPush();

  ///Event triggered by WtTimedServerPusher
  void OnTimedServerPush();
};

} //~namespace ToolTimePoll

} //~namespace ribi

#endif // TIMEPOLLWTMAINDIALOG_H
