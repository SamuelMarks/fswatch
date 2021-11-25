/*
 * Copyright (c) 2015 Enrico M. Crisostomo
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 3, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <locale>
#include "win_paths.hpp"
#include "../libfswatch_exception.hpp"
#include "../../gettext_defs.h"

using namespace std;

namespace fsw
{
  namespace win_paths
  {
    wstring posix_to_win_w(string path)
    {
      return std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(path.c_str());
    }

    string win_w_to_posix(wstring path)
    {
      return std::wstring_convert<std::codecvt_utf8<wchar_t>>().to_bytes(path);
    }
  }
}
