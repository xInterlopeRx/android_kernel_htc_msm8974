/*
 * Freescale SEC (talitos) device register and descriptor header defines
 *
 * Copyright (c) 2006-2011 Freescale Semiconductor, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */


#define TALITOS_MCR			0x1030  
#define   TALITOS_MCR_RCA0		(1 << 15) 
#define   TALITOS_MCR_RCA1		(1 << 14) 
#define   TALITOS_MCR_RCA2		(1 << 13) 
#define   TALITOS_MCR_RCA3		(1 << 12) 
#define   TALITOS_MCR_SWR		0x1     
#define TALITOS_MCR_LO			0x1034
#define TALITOS_IMR			0x1008  
#define   TALITOS_IMR_INIT		0x100ff 
#define   TALITOS_IMR_DONE		0x00055 
#define TALITOS_IMR_LO			0x100C
#define   TALITOS_IMR_LO_INIT		0x20000 
#define TALITOS_ISR			0x1010  
#define   TALITOS_ISR_4CHERR		0xaa    
#define   TALITOS_ISR_4CHDONE		0x55    
#define   TALITOS_ISR_CH_0_2_ERR	0x22    
#define   TALITOS_ISR_CH_0_2_DONE	0x11    
#define   TALITOS_ISR_CH_1_3_ERR	0x88    
#define   TALITOS_ISR_CH_1_3_DONE	0x44    
#define TALITOS_ISR_LO			0x1014
#define TALITOS_ICR			0x1018  
#define TALITOS_ICR_LO			0x101C

#define TALITOS_CH_BASE_OFFSET		0x1000	
#define TALITOS_CH_STRIDE		0x100

#define TALITOS_CCCR			0x8
#define   TALITOS_CCCR_CONT		0x2    
#define   TALITOS_CCCR_RESET		0x1    
#define TALITOS_CCCR_LO			0xc
#define   TALITOS_CCCR_LO_IWSE		0x80   
#define   TALITOS_CCCR_LO_EAE		0x20   
#define   TALITOS_CCCR_LO_CDWE		0x10   
#define   TALITOS_CCCR_LO_NT		0x4    
#define   TALITOS_CCCR_LO_CDIE		0x2    

#define TALITOS_CCPSR			0x10
#define TALITOS_CCPSR_LO		0x14
#define   TALITOS_CCPSR_LO_DOF		0x8000 
#define   TALITOS_CCPSR_LO_SOF		0x4000 
#define   TALITOS_CCPSR_LO_MDTE		0x2000 
#define   TALITOS_CCPSR_LO_SGDLZ	0x1000 
#define   TALITOS_CCPSR_LO_FPZ		0x0800 
#define   TALITOS_CCPSR_LO_IDH		0x0400 
#define   TALITOS_CCPSR_LO_IEU		0x0200 
#define   TALITOS_CCPSR_LO_EU		0x0100 
#define   TALITOS_CCPSR_LO_GB		0x0080 
#define   TALITOS_CCPSR_LO_GRL		0x0040 
#define   TALITOS_CCPSR_LO_SB		0x0020 
#define   TALITOS_CCPSR_LO_SRL		0x0010 

#define TALITOS_FF			0x48
#define TALITOS_FF_LO			0x4c

#define TALITOS_CDPR			0x40
#define TALITOS_CDPR_LO			0x44

#define TALITOS_DESCBUF			0x80
#define TALITOS_DESCBUF_LO		0x84

#define TALITOS_GATHER			0xc0
#define TALITOS_GATHER_LO		0xc4

#define TALITOS_SCATTER			0xe0
#define TALITOS_SCATTER_LO		0xe4

#define TALITOS_DEUISR			0x2030 
#define TALITOS_DEUISR_LO		0x2034
#define TALITOS_AESUISR			0x4030 
#define TALITOS_AESUISR_LO		0x4034
#define TALITOS_MDEUISR			0x6030 
#define TALITOS_MDEUISR_LO		0x6034
#define TALITOS_MDEUICR			0x6038 
#define TALITOS_MDEUICR_LO		0x603c
#define   TALITOS_MDEUICR_LO_ICE	0x4000 
#define TALITOS_AFEUISR			0x8030 
#define TALITOS_AFEUISR_LO		0x8034
#define TALITOS_RNGUISR			0xa030 
#define TALITOS_RNGUISR_LO		0xa034
#define TALITOS_RNGUSR			0xa028 
#define TALITOS_RNGUSR_LO		0xa02c
#define   TALITOS_RNGUSR_LO_RD		0x1	
#define   TALITOS_RNGUSR_LO_OFL		0xff0000
#define TALITOS_RNGUDSR			0xa010	
#define TALITOS_RNGUDSR_LO		0xa014
#define TALITOS_RNGU_FIFO		0xa800	
#define TALITOS_RNGU_FIFO_LO		0xa804	
#define TALITOS_RNGURCR			0xa018	
#define TALITOS_RNGURCR_LO		0xa01c
#define   TALITOS_RNGURCR_LO_SR		0x1	
#define TALITOS_PKEUISR			0xc030 
#define TALITOS_PKEUISR_LO		0xc034
#define TALITOS_KEUISR			0xe030 
#define TALITOS_KEUISR_LO		0xe034
#define TALITOS_CRCUISR			0xf030 
#define TALITOS_CRCUISR_LO		0xf034

#define TALITOS_MDEU_CONTEXT_SIZE_MD5_SHA1_SHA256	0x28
#define TALITOS_MDEU_CONTEXT_SIZE_SHA384_SHA512		0x48


/* written back when done */
#define DESC_HDR_DONE			cpu_to_be32(0xff000000)
#define DESC_HDR_LO_ICCR1_MASK		cpu_to_be32(0x00180000)
#define DESC_HDR_LO_ICCR1_PASS		cpu_to_be32(0x00080000)
#define DESC_HDR_LO_ICCR1_FAIL		cpu_to_be32(0x00100000)

#define	DESC_HDR_SEL0_MASK		cpu_to_be32(0xf0000000)
#define	DESC_HDR_SEL0_AFEU		cpu_to_be32(0x10000000)
#define	DESC_HDR_SEL0_DEU		cpu_to_be32(0x20000000)
#define	DESC_HDR_SEL0_MDEUA		cpu_to_be32(0x30000000)
#define	DESC_HDR_SEL0_MDEUB		cpu_to_be32(0xb0000000)
#define	DESC_HDR_SEL0_RNG		cpu_to_be32(0x40000000)
#define	DESC_HDR_SEL0_PKEU		cpu_to_be32(0x50000000)
#define	DESC_HDR_SEL0_AESU		cpu_to_be32(0x60000000)
#define	DESC_HDR_SEL0_KEU		cpu_to_be32(0x70000000)
#define	DESC_HDR_SEL0_CRCU		cpu_to_be32(0x80000000)

#define	DESC_HDR_MODE0_ENCRYPT		cpu_to_be32(0x00100000)
#define	DESC_HDR_MODE0_AESU_CBC		cpu_to_be32(0x00200000)
#define	DESC_HDR_MODE0_DEU_CBC		cpu_to_be32(0x00400000)
#define	DESC_HDR_MODE0_DEU_3DES		cpu_to_be32(0x00200000)
#define	DESC_HDR_MODE0_MDEU_CONT	cpu_to_be32(0x08000000)
#define	DESC_HDR_MODE0_MDEU_INIT	cpu_to_be32(0x01000000)
#define	DESC_HDR_MODE0_MDEU_HMAC	cpu_to_be32(0x00800000)
#define	DESC_HDR_MODE0_MDEU_PAD		cpu_to_be32(0x00400000)
#define	DESC_HDR_MODE0_MDEU_SHA224	cpu_to_be32(0x00300000)
#define	DESC_HDR_MODE0_MDEU_MD5		cpu_to_be32(0x00200000)
#define	DESC_HDR_MODE0_MDEU_SHA256	cpu_to_be32(0x00100000)
#define	DESC_HDR_MODE0_MDEU_SHA1	cpu_to_be32(0x00000000)
#define	DESC_HDR_MODE0_MDEUB_SHA384	cpu_to_be32(0x00000000)
#define	DESC_HDR_MODE0_MDEUB_SHA512	cpu_to_be32(0x00200000)
#define	DESC_HDR_MODE0_MDEU_MD5_HMAC	(DESC_HDR_MODE0_MDEU_MD5 | \
					 DESC_HDR_MODE0_MDEU_HMAC)
#define	DESC_HDR_MODE0_MDEU_SHA256_HMAC	(DESC_HDR_MODE0_MDEU_SHA256 | \
					 DESC_HDR_MODE0_MDEU_HMAC)
#define	DESC_HDR_MODE0_MDEU_SHA1_HMAC	(DESC_HDR_MODE0_MDEU_SHA1 | \
					 DESC_HDR_MODE0_MDEU_HMAC)

#define	DESC_HDR_SEL1_MASK		cpu_to_be32(0x000f0000)
#define	DESC_HDR_SEL1_MDEUA		cpu_to_be32(0x00030000)
#define	DESC_HDR_SEL1_MDEUB		cpu_to_be32(0x000b0000)
#define	DESC_HDR_SEL1_CRCU		cpu_to_be32(0x00080000)

#define	DESC_HDR_MODE1_MDEU_CICV	cpu_to_be32(0x00004000)
#define	DESC_HDR_MODE1_MDEU_INIT	cpu_to_be32(0x00001000)
#define	DESC_HDR_MODE1_MDEU_HMAC	cpu_to_be32(0x00000800)
#define	DESC_HDR_MODE1_MDEU_PAD		cpu_to_be32(0x00000400)
#define	DESC_HDR_MODE1_MDEU_SHA224	cpu_to_be32(0x00000300)
#define	DESC_HDR_MODE1_MDEU_MD5		cpu_to_be32(0x00000200)
#define	DESC_HDR_MODE1_MDEU_SHA256	cpu_to_be32(0x00000100)
#define	DESC_HDR_MODE1_MDEU_SHA1	cpu_to_be32(0x00000000)
#define	DESC_HDR_MODE1_MDEUB_SHA384	cpu_to_be32(0x00000000)
#define	DESC_HDR_MODE1_MDEUB_SHA512	cpu_to_be32(0x00000200)
#define	DESC_HDR_MODE1_MDEU_MD5_HMAC	(DESC_HDR_MODE1_MDEU_MD5 | \
					 DESC_HDR_MODE1_MDEU_HMAC)
#define	DESC_HDR_MODE1_MDEU_SHA256_HMAC	(DESC_HDR_MODE1_MDEU_SHA256 | \
					 DESC_HDR_MODE1_MDEU_HMAC)
#define	DESC_HDR_MODE1_MDEU_SHA1_HMAC	(DESC_HDR_MODE1_MDEU_SHA1 | \
					 DESC_HDR_MODE1_MDEU_HMAC)

#define	DESC_HDR_DIR_INBOUND		cpu_to_be32(0x00000002)

#define	DESC_HDR_DONE_NOTIFY		cpu_to_be32(0x00000001)

#define DESC_HDR_TYPE_AESU_CTR_NONSNOOP		cpu_to_be32(0 << 3)
#define DESC_HDR_TYPE_IPSEC_ESP			cpu_to_be32(1 << 3)
#define DESC_HDR_TYPE_COMMON_NONSNOOP_NO_AFEU	cpu_to_be32(2 << 3)
#define DESC_HDR_TYPE_HMAC_SNOOP_NO_AFEU	cpu_to_be32(4 << 3)

#define DESC_PTR_LNKTBL_JUMP			0x80
#define DESC_PTR_LNKTBL_RETURN			0x02
#define DESC_PTR_LNKTBL_NEXT			0x01
