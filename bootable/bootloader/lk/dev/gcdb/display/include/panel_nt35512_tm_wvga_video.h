/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_NT35512_TM_WVGA_VIDEO_H_

#define _PANEL_NT35512_TM_WVGA_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/

static struct panel_config nt35512_tm_wvga_video_panel_data = {
  //"qcom,mdss_dsi_nt35512_tm_wvga_video", "dsi:0:", "qcom,mdss-dsi-panel",
  "qcom,mdss_dsi_nt35512_tm_video", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution nt35512_tm_wvga_video_panel_res = {
  480, 800, 40, 40, 10, 0, 16, 14, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Color Information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info nt35512_tm_wvga_video_color = {
  24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Command information                                                 */
/*---------------------------------------------------------------------------*/

/********************************************************************************
*       ic=nt35512; glass=tm; module=tm; size=3.97; wvga; 480x800         *
*********************************************************************************/
static char nt35512_tm_wvga_cmd1[] = {0x06,0x00,0x39,0xC0,0xF0,0x55,0xAA,0x52,0x08,0x01,0xff,0xff};
static char nt35512_tm_wvga_cmd2[] = {0x04,0x00,0x39,0xC0,0xB6,0x34,0x34,0x34};
static char nt35512_tm_wvga_cmd3[] = {0x04,0x00,0x39,0xC0,0xB0,0x09,0x09,0x09};
static char nt35512_tm_wvga_cmd4[] = {0x04,0x00,0x39,0xC0,0xB7,0x24,0x24,0x24};
static char nt35512_tm_wvga_cmd5[] = {0x04,0x00,0x39,0xC0,0xB1,0x09,0x00,0x09};
static char nt35512_tm_wvga_cmd6[] = {0x04,0x00,0x39,0xC0,0xB8,0x34,0x00,0x01};
static char nt35512_tm_wvga_cmd7[] = {0x04,0x00,0x39,0xC0,0xB9,0x24,0x24,0x24};
static char nt35512_tm_wvga_cmd8[] = {0x04,0x00,0x39,0xC0,0xB3,0x05,0x05,0x05};
static char nt35512_tm_wvga_cmd9[] = {0x04,0x00,0x39,0xC0,0xBA,0x34,0x34,0x34};
static char nt35512_tm_wvga_cmd10[] = {0x04,0x00,0x39,0xC0,0xB5,0x0B,0x0B,0x0B};
static char nt35512_tm_wvga_cmd11[] = {0x04,0x00,0x39,0xC0,0xBC,0x00,0x53,0x00};
static char nt35512_tm_wvga_cmd12[] = {0x04,0x00,0x39,0xC0,0xBD,0x00,0x53,0x00};
static char nt35512_tm_wvga_cmd13[] = {0x03,0x00,0x39,0xC0,0xBE,0x00,0x8b,0xff};
static char nt35512_tm_wvga_cmd14[] = {0x35,0x00,0x39,0xC0,0xD1,0x00,0x37,0x00,0x52,0x00,0x7B,0x00,0x99,0x00,0xB1,0x00,0xD2,0x00,0xF6,0x01,0x27,0x01,0x4E,0x01,0x8C,0x01,0xBE,0x02,0x0B,0x02,0x48,0x02,0x4A,0x02,0x7E,0x02,0xBC,0x02,0xE1,0x03,0x10,0x03,0x31,0x03,0x5A,0x03,0x73,0x03,0x94,0x03,0x9F,0x03,0xB3,0x03,0xB9,0x03,0xC1,0xff,0xff,0xff};
static char nt35512_tm_wvga_cmd15[] = {0x35,0x00,0x39,0xC0,0xD2,0x00,0x37,0x00,0x52,0x00,0x7B,0x00,0x99,0x00,0xB1,0x00,0xD2,0x00,0xF6,0x01,0x27,0x01,0x4E,0x01,0x8C,0x01,0xBE,0x02,0x0B,0x02,0x48,0x02,0x4A,0x02,0x7E,0x02,0xBC,0x02,0xE1,0x03,0x10,0x03,0x31,0x03,0x5A,0x03,0x73,0x03,0x94,0x03,0x9F,0x03,0xB3,0x03,0xB9,0x03,0xC1,0xff,0xff,0xff};
static char nt35512_tm_wvga_cmd16[] = {0x35,0x00,0x39,0xC0,0xD3,0x00,0x37,0x00,0x52,0x00,0x7B,0x00,0x99,0x00,0xB1,0x00,0xD2,0x00,0xF6,0x01,0x27,0x01,0x4E,0x01,0x8C,0x01,0xBE,0x02,0x0B,0x02,0x48,0x02,0x4A,0x02,0x7E,0x02,0xBC,0x02,0xE1,0x03,0x10,0x03,0x31,0x03,0x5A,0x03,0x73,0x03,0x94,0x03,0x9F,0x03,0xB3,0x03,0xB9,0x03,0xC1,0xff,0xff,0xff};
static char nt35512_tm_wvga_cmd17[] = {0x35,0x00,0x39,0xC0,0xD4,0x00,0x37,0x00,0x52,0x00,0x7B,0x00,0x99,0x00,0xB1,0x00,0xD2,0x00,0xF6,0x01,0x27,0x01,0x4E,0x01,0x8C,0x01,0xBE,0x02,0x0B,0x02,0x48,0x02,0x4A,0x02,0x7E,0x02,0xBC,0x02,0xE1,0x03,0x10,0x03,0x31,0x03,0x5A,0x03,0x73,0x03,0x94,0x03,0x9F,0x03,0xB3,0x03,0xB9,0x03,0xC1,0xff,0xff,0xff};
static char nt35512_tm_wvga_cmd18[] = {0x35,0x00,0x39,0xC0,0xD5,0x00,0x37,0x00,0x52,0x00,0x7B,0x00,0x99,0x00,0xB1,0x00,0xD2,0x00,0xF6,0x01,0x27,0x01,0x4E,0x01,0x8C,0x01,0xBE,0x02,0x0B,0x02,0x48,0x02,0x4A,0x02,0x7E,0x02,0xBC,0x02,0xE1,0x03,0x10,0x03,0x31,0x03,0x5A,0x03,0x73,0x03,0x94,0x03,0x9F,0x03,0xB3,0x03,0xB9,0x03,0xC1,0xff,0xff,0xff};
static char nt35512_tm_wvga_cmd19[] = {0x35,0x00,0x39,0xC0,0xD6,0x00,0x37,0x00,0x52,0x00,0x7B,0x00,0x99,0x00,0xB1,0x00,0xD2,0x00,0xF6,0x01,0x27,0x01,0x4E,0x01,0x8C,0x01,0xBE,0x02,0x0B,0x02,0x48,0x02,0x4A,0x02,0x7E,0x02,0xBC,0x02,0xE1,0x03,0x10,0x03,0x31,0x03,0x5A,0x03,0x73,0x03,0x94,0x03,0x9F,0x03,0xB3,0x03,0xB9,0x03,0xC1,0xff,0xff,0xff};
static char nt35512_tm_wvga_cmd20[] = {0x06,0x00,0x39,0xC0,0xF0,0x55,0xAA,0x52,0x08,0x00};
static char nt35512_tm_wvga_cmd21[] = {0x06,0x00,0x39,0xC0,0xB0,0x08,0x01,0x05,0x05,0x05};
static char nt35512_tm_wvga_cmd22[] = {0x02,0x00,0x39,0xC0,0xB5,0x6B,0xff,0xff};
static char nt35512_tm_wvga_cmd23[] = {0x02,0x00,0x39,0xC0,0xB6,0x0A,0xff,0xff};
static char nt35512_tm_wvga_cmd24[] = {0x03,0x00,0x39,0xC0,0xB7,0x00,0x70,0xff};
static char nt35512_tm_wvga_cmd25[] = {0x05,0x00,0x39,0xC0,0xB8,0x01,0x05,0x05,0x05,0xff,0xff,0xff};
static char nt35512_tm_wvga_cmd26[] = {0x04,0x00,0x39,0xC0,0xBC,0x00,0x00,0x00};
static char nt35512_tm_wvga_cmd27[] = {0x04,0x00,0x39,0xC0,0xCC,0x03,0x00,0x00};
static char nt35512_tm_wvga_cmd28[] = {0x02,0x00,0x39,0xC0,0xBA,0x01,0xff,0xff};
static char nt35512_tm_wvga_cmd29[] = {0x05,0x00,0x39,0xC0,0xFF,0xAA,0x55,0x25,0x01,0xff,0xff,0xff};
static char nt35512_tm_wvga_cmd30[] = {0x02,0x00,0x39,0xC0,0x36,0x00,0xff,0xff};
static char nt35512_tm_wvga_cmd31[] = {0x02,0x00,0x39,0xC0,0x35,0x00,0xff,0xff};
static char nt35512_tm_wvga_cmd32[] = {0x02,0x00,0x39,0xC0,0x3A,0x77,0xff,0xff};

static char nt35512_tm_hs_wvga_video_on_exit_sleep[] = {
	0x11,0x00,0x05,0x80};

static char nt35512_tm_hs_wvga_video_on_display_on[] = {
	0x29,0x00,0x05,0x80};

static char nt35512_tm_hs_wvga_video_on_1[] = {
	0x21,0x00,0x05,0x80};

static char nt35512_tm_hs_wvga_video_on_2[] = {
	0x2c,0x00,0x05,0x80};

static struct mipi_dsi_cmd nt35512_tm_wvga_video_on_command[] = {
	{ARRAY_SIZE(nt35512_tm_wvga_cmd1), nt35512_tm_wvga_cmd1, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd2), nt35512_tm_wvga_cmd2, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd3), nt35512_tm_wvga_cmd3, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd4), nt35512_tm_wvga_cmd4, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd5), nt35512_tm_wvga_cmd5, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd6), nt35512_tm_wvga_cmd6, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd7), nt35512_tm_wvga_cmd7, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd8), nt35512_tm_wvga_cmd8, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd9), nt35512_tm_wvga_cmd9, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd10), nt35512_tm_wvga_cmd10, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd11), nt35512_tm_wvga_cmd11, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd12), nt35512_tm_wvga_cmd12, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd13), nt35512_tm_wvga_cmd13, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd14), nt35512_tm_wvga_cmd14, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd15), nt35512_tm_wvga_cmd15, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd16), nt35512_tm_wvga_cmd16, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd17), nt35512_tm_wvga_cmd17, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd18), nt35512_tm_wvga_cmd18, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd19), nt35512_tm_wvga_cmd19, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd20), nt35512_tm_wvga_cmd20, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd21), nt35512_tm_wvga_cmd21, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd22), nt35512_tm_wvga_cmd22, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd23), nt35512_tm_wvga_cmd23, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd24), nt35512_tm_wvga_cmd24, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd25), nt35512_tm_wvga_cmd25, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd26), nt35512_tm_wvga_cmd26, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd27), nt35512_tm_wvga_cmd27, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd28), nt35512_tm_wvga_cmd28, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd29), nt35512_tm_wvga_cmd29, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd30), nt35512_tm_wvga_cmd30, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd31), nt35512_tm_wvga_cmd31, 0x00},
	{ARRAY_SIZE(nt35512_tm_wvga_cmd32), nt35512_tm_wvga_cmd32, 0x00},

	{ARRAY_SIZE(nt35512_tm_hs_wvga_video_on_exit_sleep), nt35512_tm_hs_wvga_video_on_exit_sleep, 0x78},
	{ARRAY_SIZE(nt35512_tm_hs_wvga_video_on_display_on), nt35512_tm_hs_wvga_video_on_display_on, 0x32},
	{ARRAY_SIZE(nt35512_tm_hs_wvga_video_on_1), nt35512_tm_hs_wvga_video_on_1, 0x00},
	{ARRAY_SIZE(nt35512_tm_hs_wvga_video_on_2), nt35512_tm_hs_wvga_video_on_2, 0x00},

};

static char nt35512_tm_wvga_videooff_cmd0[] = {
0x28, 0x00, 0x05, 0x80 };


static char nt35512_tm_wvga_videooff_cmd1[] = {
0x10, 0x00, 0x05, 0x80 };




static struct mipi_dsi_cmd nt35512_tm_wvga_video_off_command[] = {
{ 0x4 , nt35512_tm_wvga_videooff_cmd0},
{ 0x4 , nt35512_tm_wvga_videooff_cmd1}
};
#define NT35512_TM_WVGA_VIDEO_OFF_COMMAND 2


static struct command_state nt35512_tm_wvga_video_state = {
	0, 0
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/

static struct commandpanel_info nt35512_tm_wvga_video_command_panel = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/

static struct videopanel_info nt35512_tm_wvga_video_video_panel = {
	1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane Configuration                                                        */
/*---------------------------------------------------------------------------*/

static struct lane_configuration nt35512_tm_wvga_video_lane_config = {
  2, 0, 1, 1, 0, 0
};


/*---------------------------------------------------------------------------*/
/* Panel Timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t nt35512_tm_wvga_video_timings[] = {
	//0x6B, 0x14, 0x0C, 0x00, 0x36, 0x3A, 0x12, 0x18, 0x11, 0x03, 0x04, 0x00
	//0x8B, 0x1f, 0x14, 0x00, 0x45, 0x4A, 0x19, 0x23, 0x23, 0x03, 0x04, 0x00
	0x2B, 0x14, 0x0c, 0x00, 0x36, 0x38, 0x12, 0x18, 0x11, 0x03, 0x04, 0x00
};

static struct panel_timing nt35512_tm_wvga_video_timing_info = {
	0, 4, 0x04, 0x1d
};

/*---------------------------------------------------------------------------*/
/* Panel Reset Sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence nt35512_tm_wvga_video_reset_seq = {
  { 1, 0, 1, }, { 10, 20, 120, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight Settings                                                        */
/*---------------------------------------------------------------------------*/

static struct backlight nt35512_tm_wvga_video_backlight = {
  0, 1, 255, 0, 1, 0
};


#endif /*_PANEL_NT35512_TM_WVGA_VIDEO_H_*/

