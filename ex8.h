/*
    Copyright © 2025 Mateus Felipe da Silveira Vieira
    
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>5.
*/


#ifndef _ex08_h_
#define _ex08_h_

double exponencia(double base, int expoente){
    if(expoente == 0)
        return 1;
    else
        return base * exponencia(base, expoente - 1);
}

#endif