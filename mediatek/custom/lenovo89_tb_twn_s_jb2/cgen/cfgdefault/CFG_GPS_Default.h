/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/


/*******************************************************************************
 *
 * Filename:
 * ---------
 *   CFG_GPS_Default.h
 *
 * Project:
 * --------
 *   YuSu
 *
 * Description:
 * ------------
 *    give the default GPS config data.
 *
 * Author:
 * -------
 *  Mike Chang(MTK02063) 
 *
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 * 06 24 2010 yunchang.chang
 * [ALPS00002677][Need Patch] [Volunteer Patch] ALPS.10X.W10.26 Volunteer patch for GPS customization use NVRam 
 * .
 *
 *******************************************************************************/
#ifndef _CFG_GPS_D_H
#define _CFG_GPS_D_H
ap_nvram_gps_config_struct stGPSConfigDefault =
{
#if defined MTK_GPS_MT3332
    /* "/dev/ttyMT1" */
    {'/','d','e','v','/','t','t','y','M','T','0',0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
#else
	{'/','d','e','v','/','s','t','p','g','p','s',0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
#endif
    /* 0:s/w, 1:none, 2:h/w */
    1,
    
    /* 26MHz */
    26000000,
    /* 500ppb */
#if (defined (MTK_GPS_MT3332) || defined (MTK_GPS_MT6628))
    2000,
#else
    500,
#endif
    /* 0:16.368MHz TCXO */
    0xFF,
    
    /* 0:mixer-in, 1:internal-LNA */
    0,
    
    /* sbas:0:none */
    0
};
#endif /* _CFG_GPS_D_H */
