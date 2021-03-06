#pragma once

#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/asio/deadline_timer.hpp>
#include <boost/shared_ptr.hpp>
#ifdef Q_WS_WIN
#include <qt_windows.h>
#endif
#include <QtGui>
#include <iostream>
#include <deque>

#include "DefferedCaller.h"
#include "SharedPaintPolicy.h"
#include "SharedPaintManager.h"
#include "UpgradeManager.h"
#include "SettingManager.h"
#include "NetServiceRunner.h"

extern bool _multi_instance_mode;
extern int _debug_paint_item_cnt;
extern bool _exit_flag;
