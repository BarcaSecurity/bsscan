/************************************************************************************
      
 *      Copyright (C) 2021 - 2023, Barca Web Cloud, Inc. 
 *    Email: <opensource@barca.com>  GitHub: @BarcaWebCloud. 
 
 * This software is licensed as described in the file COPYING, which                    
 * you should have received as part of this distribution. The terms                     
 * are also available at https://project-barca.github.io/docs/copyright.html.           
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell             
 * copies of the Software, and permit persons to whom the Software is                   
 * furnished to do so, under the terms of the COPYING file.                             
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY            
 * KIND, either express or implied.                                                      
 *
 **************************************************************************************/
#pragma once
#include "platform.h"
#include <stdio.h>
#ifdef BSCAN_WINDOWS
#include <direct.h>
#define getDir _getcwd
#else
#include <unistd.h>
#define getDir getcwd
#endif
#include<iostream>

std::string getCurrentDir(void) {
  char buff[FILENAME_MAX];
  getDir( buff, FILENAME_MAX );
  std::string currentDir(buff);

  return currentDir;
}
