/*
 * Copyright (c) 2020 Bitdefender
 * SPDX-License-Identifier: Apache-2.0
 */

//
// This file was auto-generated by generate_tables.py. DO NOT MODIFY!
//

#ifndef CONSTANTS_H
#define CONSTANTS_H


typedef enum _ND_INS_CLASS
{
    ND_INS_INVALID = 0,
    ND_INS_AAA,
    ND_INS_AAD,
    ND_INS_AADD,
    ND_INS_AAM,
    ND_INS_AAND,
    ND_INS_AAS,
    ND_INS_ADC,
    ND_INS_ADCX,
    ND_INS_ADD,
    ND_INS_ADDPD,
    ND_INS_ADDPS,
    ND_INS_ADDSD,
    ND_INS_ADDSS,
    ND_INS_ADDSUBPD,
    ND_INS_ADDSUBPS,
    ND_INS_ADOX,
    ND_INS_AESDEC,
    ND_INS_AESDEC128KL,
    ND_INS_AESDEC256KL,
    ND_INS_AESDECLAST,
    ND_INS_AESDECWIDE128KL,
    ND_INS_AESDECWIDE256KL,
    ND_INS_AESENC,
    ND_INS_AESENC128KL,
    ND_INS_AESENC256KL,
    ND_INS_AESENCLAST,
    ND_INS_AESENCWIDE128KL,
    ND_INS_AESENCWIDE256KL,
    ND_INS_AESIMC,
    ND_INS_AESKEYGENASSIST,
    ND_INS_ALTINST,
    ND_INS_AND,
    ND_INS_ANDN,
    ND_INS_ANDNPD,
    ND_INS_ANDNPS,
    ND_INS_ANDPD,
    ND_INS_ANDPS,
    ND_INS_AOR,
    ND_INS_ARPL,
    ND_INS_AXOR,
    ND_INS_BEXTR,
    ND_INS_BLCFILL,
    ND_INS_BLCI,
    ND_INS_BLCIC,
    ND_INS_BLCMSK,
    ND_INS_BLCS,
    ND_INS_BLENDPD,
    ND_INS_BLENDPS,
    ND_INS_BLENDVPD,
    ND_INS_BLENDVPS,
    ND_INS_BLSFILL,
    ND_INS_BLSI,
    ND_INS_BLSIC,
    ND_INS_BLSMSK,
    ND_INS_BLSR,
    ND_INS_BNDCL,
    ND_INS_BNDCN,
    ND_INS_BNDCU,
    ND_INS_BNDLDX,
    ND_INS_BNDMK,
    ND_INS_BNDMOV,
    ND_INS_BNDSTX,
    ND_INS_BOUND,
    ND_INS_BSF,
    ND_INS_BSR,
    ND_INS_BSWAP,
    ND_INS_BT,
    ND_INS_BTC,
    ND_INS_BTR,
    ND_INS_BTS,
    ND_INS_BZHI,
    ND_INS_CALLFD,
    ND_INS_CALLFI,
    ND_INS_CALLNI,
    ND_INS_CALLNR,
    ND_INS_CBW,
    ND_INS_CDQ,
    ND_INS_CDQE,
    ND_INS_CLAC,
    ND_INS_CLC,
    ND_INS_CLD,
    ND_INS_CLDEMOTE,
    ND_INS_CLEVICT0,
    ND_INS_CLEVICT1,
    ND_INS_CLFLUSH,
    ND_INS_CLFLUSHOPT,
    ND_INS_CLGI,
    ND_INS_CLI,
    ND_INS_CLRSSBSY,
    ND_INS_CLTS,
    ND_INS_CLUI,
    ND_INS_CLWB,
    ND_INS_CLZERO,
    ND_INS_CMC,
    ND_INS_CMOVcc,
    ND_INS_CMP,
    ND_INS_CMPBEXADD,
    ND_INS_CMPCXADD,
    ND_INS_CMPLEXADD,
    ND_INS_CMPLXADD,
    ND_INS_CMPNBEXADD,
    ND_INS_CMPNCXADD,
    ND_INS_CMPNLEXADD,
    ND_INS_CMPNLXADD,
    ND_INS_CMPNOXADD,
    ND_INS_CMPNPXADD,
    ND_INS_CMPNSXADD,
    ND_INS_CMPNZXADD,
    ND_INS_CMPOXADD,
    ND_INS_CMPPD,
    ND_INS_CMPPS,
    ND_INS_CMPPXADD,
    ND_INS_CMPS,
    ND_INS_CMPSD,
    ND_INS_CMPSS,
    ND_INS_CMPSXADD,
    ND_INS_CMPXCHG,
    ND_INS_CMPXCHG16B,
    ND_INS_CMPXCHG8B,
    ND_INS_CMPZXADD,
    ND_INS_COMISD,
    ND_INS_COMISS,
    ND_INS_CPUID,
    ND_INS_CPU_READ,
    ND_INS_CPU_WRITE,
    ND_INS_CQO,
    ND_INS_CRC32,
    ND_INS_CVTDQ2PD,
    ND_INS_CVTDQ2PS,
    ND_INS_CVTPD2DQ,
    ND_INS_CVTPD2PI,
    ND_INS_CVTPD2PS,
    ND_INS_CVTPI2PD,
    ND_INS_CVTPI2PS,
    ND_INS_CVTPS2DQ,
    ND_INS_CVTPS2PD,
    ND_INS_CVTPS2PI,
    ND_INS_CVTSD2SI,
    ND_INS_CVTSD2SS,
    ND_INS_CVTSI2SD,
    ND_INS_CVTSI2SS,
    ND_INS_CVTSS2SD,
    ND_INS_CVTSS2SI,
    ND_INS_CVTTPD2DQ,
    ND_INS_CVTTPD2PI,
    ND_INS_CVTTPS2DQ,
    ND_INS_CVTTPS2PI,
    ND_INS_CVTTSD2SI,
    ND_INS_CVTTSS2SI,
    ND_INS_CWD,
    ND_INS_CWDE,
    ND_INS_DAA,
    ND_INS_DAS,
    ND_INS_DEC,
    ND_INS_DELAY,
    ND_INS_DIV,
    ND_INS_DIVPD,
    ND_INS_DIVPS,
    ND_INS_DIVSD,
    ND_INS_DIVSS,
    ND_INS_DMINT,
    ND_INS_DPPD,
    ND_INS_DPPS,
    ND_INS_EMMS,
    ND_INS_ENCLS,
    ND_INS_ENCLU,
    ND_INS_ENCLV,
    ND_INS_ENCODEKEY128,
    ND_INS_ENCODEKEY256,
    ND_INS_ENDBR,
    ND_INS_ENQCMD,
    ND_INS_ENQCMDS,
    ND_INS_ENTER,
    ND_INS_ERETS,
    ND_INS_ERETU,
    ND_INS_EXTRACTPS,
    ND_INS_EXTRQ,
    ND_INS_F2XM1,
    ND_INS_FABS,
    ND_INS_FADD,
    ND_INS_FADDP,
    ND_INS_FBLD,
    ND_INS_FBSTP,
    ND_INS_FCHS,
    ND_INS_FCMOVB,
    ND_INS_FCMOVBE,
    ND_INS_FCMOVE,
    ND_INS_FCMOVNB,
    ND_INS_FCMOVNBE,
    ND_INS_FCMOVNE,
    ND_INS_FCMOVNU,
    ND_INS_FCMOVU,
    ND_INS_FCOM,
    ND_INS_FCOMI,
    ND_INS_FCOMIP,
    ND_INS_FCOMP,
    ND_INS_FCOMPP,
    ND_INS_FCOS,
    ND_INS_FDECSTP,
    ND_INS_FDIV,
    ND_INS_FDIVP,
    ND_INS_FDIVR,
    ND_INS_FDIVRP,
    ND_INS_FEMMS,
    ND_INS_FFREE,
    ND_INS_FFREEP,
    ND_INS_FIADD,
    ND_INS_FICOM,
    ND_INS_FICOMP,
    ND_INS_FIDIV,
    ND_INS_FIDIVR,
    ND_INS_FILD,
    ND_INS_FIMUL,
    ND_INS_FINCSTP,
    ND_INS_FIST,
    ND_INS_FISTP,
    ND_INS_FISTTP,
    ND_INS_FISUB,
    ND_INS_FISUBR,
    ND_INS_FLD,
    ND_INS_FLD1,
    ND_INS_FLDCW,
    ND_INS_FLDENV,
    ND_INS_FLDL2E,
    ND_INS_FLDL2T,
    ND_INS_FLDLG2,
    ND_INS_FLDLN2,
    ND_INS_FLDPI,
    ND_INS_FLDZ,
    ND_INS_FMUL,
    ND_INS_FMULP,
    ND_INS_FNCLEX,
    ND_INS_FNDISI,
    ND_INS_FNINIT,
    ND_INS_FNOP,
    ND_INS_FNSAVE,
    ND_INS_FNSTCW,
    ND_INS_FNSTENV,
    ND_INS_FNSTSW,
    ND_INS_FPATAN,
    ND_INS_FPREM,
    ND_INS_FPREM1,
    ND_INS_FPTAN,
    ND_INS_FRINEAR,
    ND_INS_FRNDINT,
    ND_INS_FRSTOR,
    ND_INS_FSCALE,
    ND_INS_FSIN,
    ND_INS_FSINCOS,
    ND_INS_FSQRT,
    ND_INS_FST,
    ND_INS_FSTDW,
    ND_INS_FSTP,
    ND_INS_FSTPNCE,
    ND_INS_FSTSG,
    ND_INS_FSUB,
    ND_INS_FSUBP,
    ND_INS_FSUBR,
    ND_INS_FSUBRP,
    ND_INS_FTST,
    ND_INS_FUCOM,
    ND_INS_FUCOMI,
    ND_INS_FUCOMIP,
    ND_INS_FUCOMP,
    ND_INS_FUCOMPP,
    ND_INS_FXAM,
    ND_INS_FXCH,
    ND_INS_FXRSTOR,
    ND_INS_FXRSTOR64,
    ND_INS_FXSAVE,
    ND_INS_FXSAVE64,
    ND_INS_FXTRACT,
    ND_INS_FYL2X,
    ND_INS_FYL2XP1,
    ND_INS_GETSEC,
    ND_INS_GF2P8AFFINEINVQB,
    ND_INS_GF2P8AFFINEQB,
    ND_INS_GF2P8MULB,
    ND_INS_HADDPD,
    ND_INS_HADDPS,
    ND_INS_HLT,
    ND_INS_HRESET,
    ND_INS_HSUBPD,
    ND_INS_HSUBPS,
    ND_INS_IDIV,
    ND_INS_IMUL,
    ND_INS_IN,
    ND_INS_INC,
    ND_INS_INCSSP,
    ND_INS_INS,
    ND_INS_INSERTPS,
    ND_INS_INSERTQ,
    ND_INS_INT,
    ND_INS_INT1,
    ND_INS_INT3,
    ND_INS_INTO,
    ND_INS_INVD,
    ND_INS_INVEPT,
    ND_INS_INVLPG,
    ND_INS_INVLPGA,
    ND_INS_INVLPGB,
    ND_INS_INVPCID,
    ND_INS_INVVPID,
    ND_INS_IRET,
    ND_INS_JMPE,
    ND_INS_JMPFD,
    ND_INS_JMPFI,
    ND_INS_JMPNI,
    ND_INS_JMPNR,
    ND_INS_Jcc,
    ND_INS_JrCXZ,
    ND_INS_KADD,
    ND_INS_KAND,
    ND_INS_KANDN,
    ND_INS_KMERGE2L1H,
    ND_INS_KMERGE2L1L,
    ND_INS_KMOV,
    ND_INS_KNOT,
    ND_INS_KOR,
    ND_INS_KORTEST,
    ND_INS_KSHIFTL,
    ND_INS_KSHIFTR,
    ND_INS_KTEST,
    ND_INS_KUNPCKBW,
    ND_INS_KUNPCKDQ,
    ND_INS_KUNPCKWD,
    ND_INS_KXNOR,
    ND_INS_KXOR,
    ND_INS_LAHF,
    ND_INS_LAR,
    ND_INS_LDDQU,
    ND_INS_LDMXCSR,
    ND_INS_LDS,
    ND_INS_LDTILECFG,
    ND_INS_LEA,
    ND_INS_LEAVE,
    ND_INS_LES,
    ND_INS_LFENCE,
    ND_INS_LFS,
    ND_INS_LGDT,
    ND_INS_LGS,
    ND_INS_LIDT,
    ND_INS_LKGS,
    ND_INS_LLDT,
    ND_INS_LLWPCB,
    ND_INS_LMSW,
    ND_INS_LOADIWKEY,
    ND_INS_LODS,
    ND_INS_LOOP,
    ND_INS_LOOPNZ,
    ND_INS_LOOPZ,
    ND_INS_LSL,
    ND_INS_LSS,
    ND_INS_LTR,
    ND_INS_LWPINS,
    ND_INS_LWPVAL,
    ND_INS_LZCNT,
    ND_INS_MASKMOVDQU,
    ND_INS_MASKMOVQ,
    ND_INS_MAXPD,
    ND_INS_MAXPS,
    ND_INS_MAXSD,
    ND_INS_MAXSS,
    ND_INS_MCOMMIT,
    ND_INS_MFENCE,
    ND_INS_MINPD,
    ND_INS_MINPS,
    ND_INS_MINSD,
    ND_INS_MINSS,
    ND_INS_MONITOR,
    ND_INS_MONITORX,
    ND_INS_MONTMUL,
    ND_INS_MOV,
    ND_INS_MOVAPD,
    ND_INS_MOVAPS,
    ND_INS_MOVBE,
    ND_INS_MOVD,
    ND_INS_MOVDDUP,
    ND_INS_MOVDIR64B,
    ND_INS_MOVDIRI,
    ND_INS_MOVDQ2Q,
    ND_INS_MOVDQA,
    ND_INS_MOVDQU,
    ND_INS_MOVHLPS,
    ND_INS_MOVHPD,
    ND_INS_MOVHPS,
    ND_INS_MOVLHPS,
    ND_INS_MOVLPD,
    ND_INS_MOVLPS,
    ND_INS_MOVMSKPD,
    ND_INS_MOVMSKPS,
    ND_INS_MOVNTDQ,
    ND_INS_MOVNTDQA,
    ND_INS_MOVNTI,
    ND_INS_MOVNTPD,
    ND_INS_MOVNTPS,
    ND_INS_MOVNTQ,
    ND_INS_MOVNTSD,
    ND_INS_MOVNTSS,
    ND_INS_MOVQ,
    ND_INS_MOVQ2DQ,
    ND_INS_MOVS,
    ND_INS_MOVSD,
    ND_INS_MOVSHDUP,
    ND_INS_MOVSLDUP,
    ND_INS_MOVSS,
    ND_INS_MOVSX,
    ND_INS_MOVSXD,
    ND_INS_MOVUPD,
    ND_INS_MOVUPS,
    ND_INS_MOVZX,
    ND_INS_MOV_CR,
    ND_INS_MOV_DR,
    ND_INS_MOV_TR,
    ND_INS_MPSADBW,
    ND_INS_MUL,
    ND_INS_MULPD,
    ND_INS_MULPS,
    ND_INS_MULSD,
    ND_INS_MULSS,
    ND_INS_MULX,
    ND_INS_MWAIT,
    ND_INS_MWAITX,
    ND_INS_NEG,
    ND_INS_NOP,
    ND_INS_NOT,
    ND_INS_OR,
    ND_INS_ORPD,
    ND_INS_ORPS,
    ND_INS_OUT,
    ND_INS_OUTS,
    ND_INS_PABSB,
    ND_INS_PABSD,
    ND_INS_PABSW,
    ND_INS_PACKSSDW,
    ND_INS_PACKSSWB,
    ND_INS_PACKUSDW,
    ND_INS_PACKUSWB,
    ND_INS_PADDB,
    ND_INS_PADDD,
    ND_INS_PADDQ,
    ND_INS_PADDSB,
    ND_INS_PADDSW,
    ND_INS_PADDUSB,
    ND_INS_PADDUSW,
    ND_INS_PADDW,
    ND_INS_PALIGNR,
    ND_INS_PAND,
    ND_INS_PANDN,
    ND_INS_PAUSE,
    ND_INS_PAVGB,
    ND_INS_PAVGUSB,
    ND_INS_PAVGW,
    ND_INS_PBLENDVB,
    ND_INS_PBLENDW,
    ND_INS_PBNDKB,
    ND_INS_PCLMULQDQ,
    ND_INS_PCMPEQB,
    ND_INS_PCMPEQD,
    ND_INS_PCMPEQQ,
    ND_INS_PCMPEQW,
    ND_INS_PCMPESTRI,
    ND_INS_PCMPESTRM,
    ND_INS_PCMPGTB,
    ND_INS_PCMPGTD,
    ND_INS_PCMPGTQ,
    ND_INS_PCMPGTW,
    ND_INS_PCMPISTRI,
    ND_INS_PCMPISTRM,
    ND_INS_PCONFIG,
    ND_INS_PDEP,
    ND_INS_PEXT,
    ND_INS_PEXTRB,
    ND_INS_PEXTRD,
    ND_INS_PEXTRQ,
    ND_INS_PEXTRW,
    ND_INS_PF2ID,
    ND_INS_PF2IW,
    ND_INS_PFACC,
    ND_INS_PFADD,
    ND_INS_PFCMPEQ,
    ND_INS_PFCMPGE,
    ND_INS_PFCMPGT,
    ND_INS_PFMAX,
    ND_INS_PFMIN,
    ND_INS_PFMUL,
    ND_INS_PFNACC,
    ND_INS_PFPNACC,
    ND_INS_PFRCP,
    ND_INS_PFRCPIT1,
    ND_INS_PFRCPIT2,
    ND_INS_PFRCPV,
    ND_INS_PFRSQIT1,
    ND_INS_PFRSQRT,
    ND_INS_PFRSQRTV,
    ND_INS_PFSUB,
    ND_INS_PFSUBR,
    ND_INS_PHADDD,
    ND_INS_PHADDSW,
    ND_INS_PHADDW,
    ND_INS_PHMINPOSUW,
    ND_INS_PHSUBD,
    ND_INS_PHSUBSW,
    ND_INS_PHSUBW,
    ND_INS_PI2FD,
    ND_INS_PI2FW,
    ND_INS_PINSRB,
    ND_INS_PINSRD,
    ND_INS_PINSRQ,
    ND_INS_PINSRW,
    ND_INS_PMADDUBSW,
    ND_INS_PMADDWD,
    ND_INS_PMAXSB,
    ND_INS_PMAXSD,
    ND_INS_PMAXSW,
    ND_INS_PMAXUB,
    ND_INS_PMAXUD,
    ND_INS_PMAXUW,
    ND_INS_PMINSB,
    ND_INS_PMINSD,
    ND_INS_PMINSW,
    ND_INS_PMINUB,
    ND_INS_PMINUD,
    ND_INS_PMINUW,
    ND_INS_PMOVMSKB,
    ND_INS_PMOVSXBD,
    ND_INS_PMOVSXBQ,
    ND_INS_PMOVSXBW,
    ND_INS_PMOVSXDQ,
    ND_INS_PMOVSXWD,
    ND_INS_PMOVSXWQ,
    ND_INS_PMOVZXBD,
    ND_INS_PMOVZXBQ,
    ND_INS_PMOVZXBW,
    ND_INS_PMOVZXDQ,
    ND_INS_PMOVZXWD,
    ND_INS_PMOVZXWQ,
    ND_INS_PMULDQ,
    ND_INS_PMULHRSW,
    ND_INS_PMULHRW,
    ND_INS_PMULHUW,
    ND_INS_PMULHW,
    ND_INS_PMULLD,
    ND_INS_PMULLW,
    ND_INS_PMULUDQ,
    ND_INS_POP,
    ND_INS_POPA,
    ND_INS_POPAD,
    ND_INS_POPCNT,
    ND_INS_POPF,
    ND_INS_POR,
    ND_INS_PREFETCH,
    ND_INS_PREFETCHE,
    ND_INS_PREFETCHIT0,
    ND_INS_PREFETCHIT1,
    ND_INS_PREFETCHM,
    ND_INS_PREFETCHNTA,
    ND_INS_PREFETCHT0,
    ND_INS_PREFETCHT1,
    ND_INS_PREFETCHT2,
    ND_INS_PREFETCHW,
    ND_INS_PREFETCHWT1,
    ND_INS_PSADBW,
    ND_INS_PSHUFB,
    ND_INS_PSHUFD,
    ND_INS_PSHUFHW,
    ND_INS_PSHUFLW,
    ND_INS_PSHUFW,
    ND_INS_PSIGNB,
    ND_INS_PSIGND,
    ND_INS_PSIGNW,
    ND_INS_PSLLD,
    ND_INS_PSLLDQ,
    ND_INS_PSLLQ,
    ND_INS_PSLLW,
    ND_INS_PSMASH,
    ND_INS_PSRAD,
    ND_INS_PSRAW,
    ND_INS_PSRLD,
    ND_INS_PSRLDQ,
    ND_INS_PSRLQ,
    ND_INS_PSRLW,
    ND_INS_PSUBB,
    ND_INS_PSUBD,
    ND_INS_PSUBQ,
    ND_INS_PSUBSB,
    ND_INS_PSUBSW,
    ND_INS_PSUBUSB,
    ND_INS_PSUBUSW,
    ND_INS_PSUBW,
    ND_INS_PSWAPD,
    ND_INS_PTEST,
    ND_INS_PTWRITE,
    ND_INS_PUNPCKHBW,
    ND_INS_PUNPCKHDQ,
    ND_INS_PUNPCKHQDQ,
    ND_INS_PUNPCKHWD,
    ND_INS_PUNPCKLBW,
    ND_INS_PUNPCKLDQ,
    ND_INS_PUNPCKLQDQ,
    ND_INS_PUNPCKLWD,
    ND_INS_PUSH,
    ND_INS_PUSHA,
    ND_INS_PUSHAD,
    ND_INS_PUSHF,
    ND_INS_PVALIDATE,
    ND_INS_PXOR,
    ND_INS_RCL,
    ND_INS_RCPPS,
    ND_INS_RCPSS,
    ND_INS_RCR,
    ND_INS_RDFSBASE,
    ND_INS_RDGSBASE,
    ND_INS_RDMSR,
    ND_INS_RDMSRLIST,
    ND_INS_RDPID,
    ND_INS_RDPKRU,
    ND_INS_RDPMC,
    ND_INS_RDPRU,
    ND_INS_RDRAND,
    ND_INS_RDSEED,
    ND_INS_RDSHR,
    ND_INS_RDTSC,
    ND_INS_RDTSCP,
    ND_INS_RETF,
    ND_INS_RETN,
    ND_INS_RMPADJUST,
    ND_INS_RMPQUERY,
    ND_INS_RMPUPDATE,
    ND_INS_ROL,
    ND_INS_ROR,
    ND_INS_RORX,
    ND_INS_ROUNDPD,
    ND_INS_ROUNDPS,
    ND_INS_ROUNDSD,
    ND_INS_ROUNDSS,
    ND_INS_RSDC,
    ND_INS_RSLDT,
    ND_INS_RSM,
    ND_INS_RSQRTPS,
    ND_INS_RSQRTSS,
    ND_INS_RSSSP,
    ND_INS_RSTORSSP,
    ND_INS_RSTS,
    ND_INS_SAHF,
    ND_INS_SAL,
    ND_INS_SALC,
    ND_INS_SAR,
    ND_INS_SARX,
    ND_INS_SAVEPREVSSP,
    ND_INS_SBB,
    ND_INS_SCAS,
    ND_INS_SEAMCALL,
    ND_INS_SEAMOPS,
    ND_INS_SEAMRET,
    ND_INS_SENDUIPI,
    ND_INS_SERIALIZE,
    ND_INS_SETSSBSY,
    ND_INS_SETcc,
    ND_INS_SFENCE,
    ND_INS_SGDT,
    ND_INS_SHA1MSG1,
    ND_INS_SHA1MSG2,
    ND_INS_SHA1NEXTE,
    ND_INS_SHA1RNDS4,
    ND_INS_SHA256MSG1,
    ND_INS_SHA256MSG2,
    ND_INS_SHA256RNDS2,
    ND_INS_SHL,
    ND_INS_SHLD,
    ND_INS_SHLX,
    ND_INS_SHR,
    ND_INS_SHRD,
    ND_INS_SHRX,
    ND_INS_SHUFPD,
    ND_INS_SHUFPS,
    ND_INS_SIDT,
    ND_INS_SKINIT,
    ND_INS_SLDT,
    ND_INS_SLWPCB,
    ND_INS_SMINT,
    ND_INS_SMSW,
    ND_INS_SPFLT,
    ND_INS_SQRTPD,
    ND_INS_SQRTPS,
    ND_INS_SQRTSD,
    ND_INS_SQRTSS,
    ND_INS_STAC,
    ND_INS_STC,
    ND_INS_STD,
    ND_INS_STGI,
    ND_INS_STI,
    ND_INS_STMXCSR,
    ND_INS_STOS,
    ND_INS_STR,
    ND_INS_STTILECFG,
    ND_INS_STUI,
    ND_INS_SUB,
    ND_INS_SUBPD,
    ND_INS_SUBPS,
    ND_INS_SUBSD,
    ND_INS_SUBSS,
    ND_INS_SVDC,
    ND_INS_SVLDT,
    ND_INS_SVTS,
    ND_INS_SWAPGS,
    ND_INS_SYSCALL,
    ND_INS_SYSENTER,
    ND_INS_SYSEXIT,
    ND_INS_SYSRET,
    ND_INS_T1MSKC,
    ND_INS_TCMMIMFP16PS,
    ND_INS_TCMMRLFP16PS,
    ND_INS_TDCALL,
    ND_INS_TDPBF16PS,
    ND_INS_TDPBSSD,
    ND_INS_TDPBSUD,
    ND_INS_TDPBUSD,
    ND_INS_TDPBUUD,
    ND_INS_TDPFP16PS,
    ND_INS_TEST,
    ND_INS_TESTUI,
    ND_INS_TILELOADD,
    ND_INS_TILELOADDT1,
    ND_INS_TILERELEASE,
    ND_INS_TILESTORED,
    ND_INS_TILEZERO,
    ND_INS_TLBSYNC,
    ND_INS_TPAUSE,
    ND_INS_TZCNT,
    ND_INS_TZMSK,
    ND_INS_UCOMISD,
    ND_INS_UCOMISS,
    ND_INS_UD0,
    ND_INS_UD1,
    ND_INS_UD2,
    ND_INS_UIRET,
    ND_INS_UMONITOR,
    ND_INS_UMWAIT,
    ND_INS_UNPCKHPD,
    ND_INS_UNPCKHPS,
    ND_INS_UNPCKLPD,
    ND_INS_UNPCKLPS,
    ND_INS_V4FMADDPS,
    ND_INS_V4FMADDSS,
    ND_INS_V4FNMADDPS,
    ND_INS_V4FNMADDSS,
    ND_INS_VADDPD,
    ND_INS_VADDPH,
    ND_INS_VADDPS,
    ND_INS_VADDSD,
    ND_INS_VADDSH,
    ND_INS_VADDSS,
    ND_INS_VADDSUBPD,
    ND_INS_VADDSUBPS,
    ND_INS_VAESDEC,
    ND_INS_VAESDECLAST,
    ND_INS_VAESENC,
    ND_INS_VAESENCLAST,
    ND_INS_VAESIMC,
    ND_INS_VAESKEYGENASSIST,
    ND_INS_VALIGND,
    ND_INS_VALIGNQ,
    ND_INS_VANDNPD,
    ND_INS_VANDNPS,
    ND_INS_VANDPD,
    ND_INS_VANDPS,
    ND_INS_VBCSTNEBF162PS,
    ND_INS_VBCSTNESH2PS,
    ND_INS_VBLENDMPD,
    ND_INS_VBLENDMPS,
    ND_INS_VBLENDPD,
    ND_INS_VBLENDPS,
    ND_INS_VBLENDVPD,
    ND_INS_VBLENDVPS,
    ND_INS_VBROADCASTF128,
    ND_INS_VBROADCASTF32X2,
    ND_INS_VBROADCASTF32X4,
    ND_INS_VBROADCASTF32X8,
    ND_INS_VBROADCASTF64X2,
    ND_INS_VBROADCASTF64X4,
    ND_INS_VBROADCASTI128,
    ND_INS_VBROADCASTI32X2,
    ND_INS_VBROADCASTI32X4,
    ND_INS_VBROADCASTI32X8,
    ND_INS_VBROADCASTI64X2,
    ND_INS_VBROADCASTI64X4,
    ND_INS_VBROADCASTSD,
    ND_INS_VBROADCASTSS,
    ND_INS_VCMPPD,
    ND_INS_VCMPPH,
    ND_INS_VCMPPS,
    ND_INS_VCMPSD,
    ND_INS_VCMPSH,
    ND_INS_VCMPSS,
    ND_INS_VCOMISD,
    ND_INS_VCOMISH,
    ND_INS_VCOMISS,
    ND_INS_VCOMPRESSPD,
    ND_INS_VCOMPRESSPS,
    ND_INS_VCVTDQ2PD,
    ND_INS_VCVTDQ2PH,
    ND_INS_VCVTDQ2PS,
    ND_INS_VCVTNE2PS2BF16,
    ND_INS_VCVTNEEBF162PS,
    ND_INS_VCVTNEEPH2PS,
    ND_INS_VCVTNEOBF162PS,
    ND_INS_VCVTNEOPH2PS,
    ND_INS_VCVTNEPS2BF16,
    ND_INS_VCVTPD2DQ,
    ND_INS_VCVTPD2PH,
    ND_INS_VCVTPD2PS,
    ND_INS_VCVTPD2QQ,
    ND_INS_VCVTPD2UDQ,
    ND_INS_VCVTPD2UQQ,
    ND_INS_VCVTPH2DQ,
    ND_INS_VCVTPH2PD,
    ND_INS_VCVTPH2PS,
    ND_INS_VCVTPH2PSX,
    ND_INS_VCVTPH2QQ,
    ND_INS_VCVTPH2UDQ,
    ND_INS_VCVTPH2UQQ,
    ND_INS_VCVTPH2UW,
    ND_INS_VCVTPH2W,
    ND_INS_VCVTPS2DQ,
    ND_INS_VCVTPS2PD,
    ND_INS_VCVTPS2PH,
    ND_INS_VCVTPS2PHX,
    ND_INS_VCVTPS2QQ,
    ND_INS_VCVTPS2UDQ,
    ND_INS_VCVTPS2UQQ,
    ND_INS_VCVTQQ2PD,
    ND_INS_VCVTQQ2PH,
    ND_INS_VCVTQQ2PS,
    ND_INS_VCVTSD2SH,
    ND_INS_VCVTSD2SI,
    ND_INS_VCVTSD2SS,
    ND_INS_VCVTSD2USI,
    ND_INS_VCVTSH2SD,
    ND_INS_VCVTSH2SI,
    ND_INS_VCVTSH2SS,
    ND_INS_VCVTSH2USI,
    ND_INS_VCVTSI2SD,
    ND_INS_VCVTSI2SH,
    ND_INS_VCVTSI2SS,
    ND_INS_VCVTSS2SD,
    ND_INS_VCVTSS2SH,
    ND_INS_VCVTSS2SI,
    ND_INS_VCVTSS2USI,
    ND_INS_VCVTTPD2DQ,
    ND_INS_VCVTTPD2QQ,
    ND_INS_VCVTTPD2UDQ,
    ND_INS_VCVTTPD2UQQ,
    ND_INS_VCVTTPH2DQ,
    ND_INS_VCVTTPH2QQ,
    ND_INS_VCVTTPH2UDQ,
    ND_INS_VCVTTPH2UQQ,
    ND_INS_VCVTTPH2UW,
    ND_INS_VCVTTPH2W,
    ND_INS_VCVTTPS2DQ,
    ND_INS_VCVTTPS2QQ,
    ND_INS_VCVTTPS2UDQ,
    ND_INS_VCVTTPS2UQQ,
    ND_INS_VCVTTSD2SI,
    ND_INS_VCVTTSD2USI,
    ND_INS_VCVTTSH2SI,
    ND_INS_VCVTTSH2USI,
    ND_INS_VCVTTSS2SI,
    ND_INS_VCVTTSS2USI,
    ND_INS_VCVTUDQ2PD,
    ND_INS_VCVTUDQ2PH,
    ND_INS_VCVTUDQ2PS,
    ND_INS_VCVTUQQ2PD,
    ND_INS_VCVTUQQ2PH,
    ND_INS_VCVTUQQ2PS,
    ND_INS_VCVTUSI2SD,
    ND_INS_VCVTUSI2SH,
    ND_INS_VCVTUSI2SS,
    ND_INS_VCVTUW2PH,
    ND_INS_VCVTW2PH,
    ND_INS_VDBPSADBW,
    ND_INS_VDIVPD,
    ND_INS_VDIVPH,
    ND_INS_VDIVPS,
    ND_INS_VDIVSD,
    ND_INS_VDIVSH,
    ND_INS_VDIVSS,
    ND_INS_VDPBF16PS,
    ND_INS_VDPPD,
    ND_INS_VDPPS,
    ND_INS_VERR,
    ND_INS_VERW,
    ND_INS_VEXP2PD,
    ND_INS_VEXP2PS,
    ND_INS_VEXPANDPD,
    ND_INS_VEXPANDPS,
    ND_INS_VEXTRACTF128,
    ND_INS_VEXTRACTF32X4,
    ND_INS_VEXTRACTF32X8,
    ND_INS_VEXTRACTF64X2,
    ND_INS_VEXTRACTF64X4,
    ND_INS_VEXTRACTI128,
    ND_INS_VEXTRACTI32X4,
    ND_INS_VEXTRACTI32X8,
    ND_INS_VEXTRACTI64X2,
    ND_INS_VEXTRACTI64X4,
    ND_INS_VEXTRACTPS,
    ND_INS_VFCMADDCPH,
    ND_INS_VFCMADDCSH,
    ND_INS_VFCMULCPH,
    ND_INS_VFCMULCSH,
    ND_INS_VFIXUPIMMPD,
    ND_INS_VFIXUPIMMPS,
    ND_INS_VFIXUPIMMSD,
    ND_INS_VFIXUPIMMSS,
    ND_INS_VFMADD132PD,
    ND_INS_VFMADD132PH,
    ND_INS_VFMADD132PS,
    ND_INS_VFMADD132SD,
    ND_INS_VFMADD132SH,
    ND_INS_VFMADD132SS,
    ND_INS_VFMADD213PD,
    ND_INS_VFMADD213PH,
    ND_INS_VFMADD213PS,
    ND_INS_VFMADD213SD,
    ND_INS_VFMADD213SH,
    ND_INS_VFMADD213SS,
    ND_INS_VFMADD231PD,
    ND_INS_VFMADD231PH,
    ND_INS_VFMADD231PS,
    ND_INS_VFMADD231SD,
    ND_INS_VFMADD231SH,
    ND_INS_VFMADD231SS,
    ND_INS_VFMADDCPH,
    ND_INS_VFMADDCSH,
    ND_INS_VFMADDPD,
    ND_INS_VFMADDPS,
    ND_INS_VFMADDSD,
    ND_INS_VFMADDSS,
    ND_INS_VFMADDSUB132PD,
    ND_INS_VFMADDSUB132PH,
    ND_INS_VFMADDSUB132PS,
    ND_INS_VFMADDSUB213PD,
    ND_INS_VFMADDSUB213PH,
    ND_INS_VFMADDSUB213PS,
    ND_INS_VFMADDSUB231PD,
    ND_INS_VFMADDSUB231PH,
    ND_INS_VFMADDSUB231PS,
    ND_INS_VFMADDSUBPD,
    ND_INS_VFMADDSUBPS,
    ND_INS_VFMSUB132PD,
    ND_INS_VFMSUB132PH,
    ND_INS_VFMSUB132PS,
    ND_INS_VFMSUB132SD,
    ND_INS_VFMSUB132SH,
    ND_INS_VFMSUB132SS,
    ND_INS_VFMSUB213PD,
    ND_INS_VFMSUB213PH,
    ND_INS_VFMSUB213PS,
    ND_INS_VFMSUB213SD,
    ND_INS_VFMSUB213SH,
    ND_INS_VFMSUB213SS,
    ND_INS_VFMSUB231PD,
    ND_INS_VFMSUB231PH,
    ND_INS_VFMSUB231PS,
    ND_INS_VFMSUB231SD,
    ND_INS_VFMSUB231SH,
    ND_INS_VFMSUB231SS,
    ND_INS_VFMSUBADD132PD,
    ND_INS_VFMSUBADD132PH,
    ND_INS_VFMSUBADD132PS,
    ND_INS_VFMSUBADD213PD,
    ND_INS_VFMSUBADD213PH,
    ND_INS_VFMSUBADD213PS,
    ND_INS_VFMSUBADD231PD,
    ND_INS_VFMSUBADD231PH,
    ND_INS_VFMSUBADD231PS,
    ND_INS_VFMSUBADDPD,
    ND_INS_VFMSUBADDPS,
    ND_INS_VFMSUBPD,
    ND_INS_VFMSUBPS,
    ND_INS_VFMSUBSD,
    ND_INS_VFMSUBSS,
    ND_INS_VFMULCPH,
    ND_INS_VFMULCSH,
    ND_INS_VFNMADD132PD,
    ND_INS_VFNMADD132PH,
    ND_INS_VFNMADD132PS,
    ND_INS_VFNMADD132SD,
    ND_INS_VFNMADD132SH,
    ND_INS_VFNMADD132SS,
    ND_INS_VFNMADD213PD,
    ND_INS_VFNMADD213PH,
    ND_INS_VFNMADD213PS,
    ND_INS_VFNMADD213SD,
    ND_INS_VFNMADD213SH,
    ND_INS_VFNMADD213SS,
    ND_INS_VFNMADD231PD,
    ND_INS_VFNMADD231PH,
    ND_INS_VFNMADD231PS,
    ND_INS_VFNMADD231SD,
    ND_INS_VFNMADD231SH,
    ND_INS_VFNMADD231SS,
    ND_INS_VFNMADDPD,
    ND_INS_VFNMADDPS,
    ND_INS_VFNMADDSD,
    ND_INS_VFNMADDSS,
    ND_INS_VFNMSUB132PD,
    ND_INS_VFNMSUB132PH,
    ND_INS_VFNMSUB132PS,
    ND_INS_VFNMSUB132SD,
    ND_INS_VFNMSUB132SH,
    ND_INS_VFNMSUB132SS,
    ND_INS_VFNMSUB213PD,
    ND_INS_VFNMSUB213PH,
    ND_INS_VFNMSUB213PS,
    ND_INS_VFNMSUB213SD,
    ND_INS_VFNMSUB213SH,
    ND_INS_VFNMSUB213SS,
    ND_INS_VFNMSUB231PD,
    ND_INS_VFNMSUB231PH,
    ND_INS_VFNMSUB231PS,
    ND_INS_VFNMSUB231SD,
    ND_INS_VFNMSUB231SH,
    ND_INS_VFNMSUB231SS,
    ND_INS_VFNMSUBPD,
    ND_INS_VFNMSUBPS,
    ND_INS_VFNMSUBSD,
    ND_INS_VFNMSUBSS,
    ND_INS_VFPCLASSPD,
    ND_INS_VFPCLASSPH,
    ND_INS_VFPCLASSPS,
    ND_INS_VFPCLASSSD,
    ND_INS_VFPCLASSSH,
    ND_INS_VFPCLASSSS,
    ND_INS_VFRCZPD,
    ND_INS_VFRCZPS,
    ND_INS_VFRCZSD,
    ND_INS_VFRCZSS,
    ND_INS_VGATHERDPD,
    ND_INS_VGATHERDPS,
    ND_INS_VGATHERPF0DPD,
    ND_INS_VGATHERPF0DPS,
    ND_INS_VGATHERPF0QPD,
    ND_INS_VGATHERPF0QPS,
    ND_INS_VGATHERPF1DPD,
    ND_INS_VGATHERPF1DPS,
    ND_INS_VGATHERPF1QPD,
    ND_INS_VGATHERPF1QPS,
    ND_INS_VGATHERQPD,
    ND_INS_VGATHERQPS,
    ND_INS_VGETEXPPD,
    ND_INS_VGETEXPPH,
    ND_INS_VGETEXPPS,
    ND_INS_VGETEXPSD,
    ND_INS_VGETEXPSH,
    ND_INS_VGETEXPSS,
    ND_INS_VGETMANTPD,
    ND_INS_VGETMANTPH,
    ND_INS_VGETMANTPS,
    ND_INS_VGETMANTSD,
    ND_INS_VGETMANTSH,
    ND_INS_VGETMANTSS,
    ND_INS_VGF2P8AFFINEINVQB,
    ND_INS_VGF2P8AFFINEQB,
    ND_INS_VGF2P8MULB,
    ND_INS_VHADDPD,
    ND_INS_VHADDPS,
    ND_INS_VHSUBPD,
    ND_INS_VHSUBPS,
    ND_INS_VINSERTF128,
    ND_INS_VINSERTF32X4,
    ND_INS_VINSERTF32X8,
    ND_INS_VINSERTF64X2,
    ND_INS_VINSERTF64X4,
    ND_INS_VINSERTI128,
    ND_INS_VINSERTI32X4,
    ND_INS_VINSERTI32X8,
    ND_INS_VINSERTI64X2,
    ND_INS_VINSERTI64X4,
    ND_INS_VINSERTPS,
    ND_INS_VLDDQU,
    ND_INS_VLDMXCSR,
    ND_INS_VMASKMOVDQU,
    ND_INS_VMASKMOVPD,
    ND_INS_VMASKMOVPS,
    ND_INS_VMAXPD,
    ND_INS_VMAXPH,
    ND_INS_VMAXPS,
    ND_INS_VMAXSD,
    ND_INS_VMAXSH,
    ND_INS_VMAXSS,
    ND_INS_VMCALL,
    ND_INS_VMCLEAR,
    ND_INS_VMFUNC,
    ND_INS_VMGEXIT,
    ND_INS_VMINPD,
    ND_INS_VMINPH,
    ND_INS_VMINPS,
    ND_INS_VMINSD,
    ND_INS_VMINSH,
    ND_INS_VMINSS,
    ND_INS_VMLAUNCH,
    ND_INS_VMLOAD,
    ND_INS_VMMCALL,
    ND_INS_VMOVAPD,
    ND_INS_VMOVAPS,
    ND_INS_VMOVD,
    ND_INS_VMOVDDUP,
    ND_INS_VMOVDQA,
    ND_INS_VMOVDQA32,
    ND_INS_VMOVDQA64,
    ND_INS_VMOVDQU,
    ND_INS_VMOVDQU16,
    ND_INS_VMOVDQU32,
    ND_INS_VMOVDQU64,
    ND_INS_VMOVDQU8,
    ND_INS_VMOVHLPS,
    ND_INS_VMOVHPD,
    ND_INS_VMOVHPS,
    ND_INS_VMOVLHPS,
    ND_INS_VMOVLPD,
    ND_INS_VMOVLPS,
    ND_INS_VMOVMSKPD,
    ND_INS_VMOVMSKPS,
    ND_INS_VMOVNTDQ,
    ND_INS_VMOVNTDQA,
    ND_INS_VMOVNTPD,
    ND_INS_VMOVNTPS,
    ND_INS_VMOVQ,
    ND_INS_VMOVSD,
    ND_INS_VMOVSH,
    ND_INS_VMOVSHDUP,
    ND_INS_VMOVSLDUP,
    ND_INS_VMOVSS,
    ND_INS_VMOVUPD,
    ND_INS_VMOVUPS,
    ND_INS_VMOVW,
    ND_INS_VMPSADBW,
    ND_INS_VMPTRLD,
    ND_INS_VMPTRST,
    ND_INS_VMREAD,
    ND_INS_VMRESUME,
    ND_INS_VMRUN,
    ND_INS_VMSAVE,
    ND_INS_VMULPD,
    ND_INS_VMULPH,
    ND_INS_VMULPS,
    ND_INS_VMULSD,
    ND_INS_VMULSH,
    ND_INS_VMULSS,
    ND_INS_VMWRITE,
    ND_INS_VMXOFF,
    ND_INS_VMXON,
    ND_INS_VORPD,
    ND_INS_VORPS,
    ND_INS_VP2INTERSECTD,
    ND_INS_VP2INTERSECTQ,
    ND_INS_VP4DPWSSD,
    ND_INS_VP4DPWSSDS,
    ND_INS_VPABSB,
    ND_INS_VPABSD,
    ND_INS_VPABSQ,
    ND_INS_VPABSW,
    ND_INS_VPACKSSDW,
    ND_INS_VPACKSSWB,
    ND_INS_VPACKUSDW,
    ND_INS_VPACKUSWB,
    ND_INS_VPADDB,
    ND_INS_VPADDD,
    ND_INS_VPADDQ,
    ND_INS_VPADDSB,
    ND_INS_VPADDSW,
    ND_INS_VPADDUSB,
    ND_INS_VPADDUSW,
    ND_INS_VPADDW,
    ND_INS_VPALIGNR,
    ND_INS_VPAND,
    ND_INS_VPANDD,
    ND_INS_VPANDN,
    ND_INS_VPANDND,
    ND_INS_VPANDNQ,
    ND_INS_VPANDQ,
    ND_INS_VPAVGB,
    ND_INS_VPAVGW,
    ND_INS_VPBLENDD,
    ND_INS_VPBLENDMB,
    ND_INS_VPBLENDMD,
    ND_INS_VPBLENDMQ,
    ND_INS_VPBLENDMW,
    ND_INS_VPBLENDVB,
    ND_INS_VPBLENDW,
    ND_INS_VPBROADCASTB,
    ND_INS_VPBROADCASTD,
    ND_INS_VPBROADCASTMB2Q,
    ND_INS_VPBROADCASTMW2D,
    ND_INS_VPBROADCASTQ,
    ND_INS_VPBROADCASTW,
    ND_INS_VPCLMULQDQ,
    ND_INS_VPCMOV,
    ND_INS_VPCMPB,
    ND_INS_VPCMPD,
    ND_INS_VPCMPEQB,
    ND_INS_VPCMPEQD,
    ND_INS_VPCMPEQQ,
    ND_INS_VPCMPEQW,
    ND_INS_VPCMPESTRI,
    ND_INS_VPCMPESTRM,
    ND_INS_VPCMPGTB,
    ND_INS_VPCMPGTD,
    ND_INS_VPCMPGTQ,
    ND_INS_VPCMPGTW,
    ND_INS_VPCMPISTRI,
    ND_INS_VPCMPISTRM,
    ND_INS_VPCMPQ,
    ND_INS_VPCMPUB,
    ND_INS_VPCMPUD,
    ND_INS_VPCMPUQ,
    ND_INS_VPCMPUW,
    ND_INS_VPCMPW,
    ND_INS_VPCOMB,
    ND_INS_VPCOMD,
    ND_INS_VPCOMPRESSB,
    ND_INS_VPCOMPRESSD,
    ND_INS_VPCOMPRESSQ,
    ND_INS_VPCOMPRESSW,
    ND_INS_VPCOMQ,
    ND_INS_VPCOMUB,
    ND_INS_VPCOMUD,
    ND_INS_VPCOMUQ,
    ND_INS_VPCOMUW,
    ND_INS_VPCOMW,
    ND_INS_VPCONFLICTD,
    ND_INS_VPCONFLICTQ,
    ND_INS_VPDPBSSD,
    ND_INS_VPDPBSSDS,
    ND_INS_VPDPBSUD,
    ND_INS_VPDPBSUDS,
    ND_INS_VPDPBUSD,
    ND_INS_VPDPBUSDS,
    ND_INS_VPDPBUUD,
    ND_INS_VPDPBUUDS,
    ND_INS_VPDPWSSD,
    ND_INS_VPDPWSSDS,
    ND_INS_VPDPWSUD,
    ND_INS_VPDPWSUDS,
    ND_INS_VPDPWUSD,
    ND_INS_VPDPWUSDS,
    ND_INS_VPDPWUUD,
    ND_INS_VPDPWUUDS,
    ND_INS_VPERM2F128,
    ND_INS_VPERM2I128,
    ND_INS_VPERMB,
    ND_INS_VPERMD,
    ND_INS_VPERMI2B,
    ND_INS_VPERMI2D,
    ND_INS_VPERMI2PD,
    ND_INS_VPERMI2PS,
    ND_INS_VPERMI2Q,
    ND_INS_VPERMI2W,
    ND_INS_VPERMIL2PD,
    ND_INS_VPERMIL2PS,
    ND_INS_VPERMILPD,
    ND_INS_VPERMILPS,
    ND_INS_VPERMPD,
    ND_INS_VPERMPS,
    ND_INS_VPERMQ,
    ND_INS_VPERMT2B,
    ND_INS_VPERMT2D,
    ND_INS_VPERMT2PD,
    ND_INS_VPERMT2PS,
    ND_INS_VPERMT2Q,
    ND_INS_VPERMT2W,
    ND_INS_VPERMW,
    ND_INS_VPEXPANDB,
    ND_INS_VPEXPANDD,
    ND_INS_VPEXPANDQ,
    ND_INS_VPEXPANDW,
    ND_INS_VPEXTRB,
    ND_INS_VPEXTRD,
    ND_INS_VPEXTRQ,
    ND_INS_VPEXTRW,
    ND_INS_VPGATHERDD,
    ND_INS_VPGATHERDQ,
    ND_INS_VPGATHERQD,
    ND_INS_VPGATHERQQ,
    ND_INS_VPHADDBD,
    ND_INS_VPHADDBQ,
    ND_INS_VPHADDBW,
    ND_INS_VPHADDD,
    ND_INS_VPHADDDQ,
    ND_INS_VPHADDSW,
    ND_INS_VPHADDUBD,
    ND_INS_VPHADDUBQ,
    ND_INS_VPHADDUBW,
    ND_INS_VPHADDUDQ,
    ND_INS_VPHADDUWD,
    ND_INS_VPHADDUWQ,
    ND_INS_VPHADDW,
    ND_INS_VPHADDWD,
    ND_INS_VPHADDWQ,
    ND_INS_VPHMINPOSUW,
    ND_INS_VPHSUBBW,
    ND_INS_VPHSUBD,
    ND_INS_VPHSUBDQ,
    ND_INS_VPHSUBSW,
    ND_INS_VPHSUBW,
    ND_INS_VPHSUBWD,
    ND_INS_VPINSRB,
    ND_INS_VPINSRD,
    ND_INS_VPINSRQ,
    ND_INS_VPINSRW,
    ND_INS_VPLZCNTD,
    ND_INS_VPLZCNTQ,
    ND_INS_VPMACSDD,
    ND_INS_VPMACSDQH,
    ND_INS_VPMACSDQL,
    ND_INS_VPMACSSDD,
    ND_INS_VPMACSSDQH,
    ND_INS_VPMACSSDQL,
    ND_INS_VPMACSSWD,
    ND_INS_VPMACSSWW,
    ND_INS_VPMACSWD,
    ND_INS_VPMACSWW,
    ND_INS_VPMADCSSWD,
    ND_INS_VPMADCSWD,
    ND_INS_VPMADD52HUQ,
    ND_INS_VPMADD52LUQ,
    ND_INS_VPMADDUBSW,
    ND_INS_VPMADDWD,
    ND_INS_VPMASKMOVD,
    ND_INS_VPMASKMOVQ,
    ND_INS_VPMAXSB,
    ND_INS_VPMAXSD,
    ND_INS_VPMAXSQ,
    ND_INS_VPMAXSW,
    ND_INS_VPMAXUB,
    ND_INS_VPMAXUD,
    ND_INS_VPMAXUQ,
    ND_INS_VPMAXUW,
    ND_INS_VPMINSB,
    ND_INS_VPMINSD,
    ND_INS_VPMINSQ,
    ND_INS_VPMINSW,
    ND_INS_VPMINUB,
    ND_INS_VPMINUD,
    ND_INS_VPMINUQ,
    ND_INS_VPMINUW,
    ND_INS_VPMOVB2M,
    ND_INS_VPMOVD2M,
    ND_INS_VPMOVDB,
    ND_INS_VPMOVDW,
    ND_INS_VPMOVM2B,
    ND_INS_VPMOVM2D,
    ND_INS_VPMOVM2Q,
    ND_INS_VPMOVM2W,
    ND_INS_VPMOVMSKB,
    ND_INS_VPMOVQ2M,
    ND_INS_VPMOVQB,
    ND_INS_VPMOVQD,
    ND_INS_VPMOVQW,
    ND_INS_VPMOVSDB,
    ND_INS_VPMOVSDW,
    ND_INS_VPMOVSQB,
    ND_INS_VPMOVSQD,
    ND_INS_VPMOVSQW,
    ND_INS_VPMOVSWB,
    ND_INS_VPMOVSXBD,
    ND_INS_VPMOVSXBQ,
    ND_INS_VPMOVSXBW,
    ND_INS_VPMOVSXDQ,
    ND_INS_VPMOVSXWD,
    ND_INS_VPMOVSXWQ,
    ND_INS_VPMOVUSDB,
    ND_INS_VPMOVUSDW,
    ND_INS_VPMOVUSQB,
    ND_INS_VPMOVUSQD,
    ND_INS_VPMOVUSQW,
    ND_INS_VPMOVUSWB,
    ND_INS_VPMOVW2M,
    ND_INS_VPMOVWB,
    ND_INS_VPMOVZXBD,
    ND_INS_VPMOVZXBQ,
    ND_INS_VPMOVZXBW,
    ND_INS_VPMOVZXDQ,
    ND_INS_VPMOVZXWD,
    ND_INS_VPMOVZXWQ,
    ND_INS_VPMULDQ,
    ND_INS_VPMULHRSW,
    ND_INS_VPMULHUW,
    ND_INS_VPMULHW,
    ND_INS_VPMULLD,
    ND_INS_VPMULLQ,
    ND_INS_VPMULLW,
    ND_INS_VPMULTISHIFTQB,
    ND_INS_VPMULUDQ,
    ND_INS_VPOPCNTB,
    ND_INS_VPOPCNTD,
    ND_INS_VPOPCNTQ,
    ND_INS_VPOPCNTW,
    ND_INS_VPOR,
    ND_INS_VPORD,
    ND_INS_VPORQ,
    ND_INS_VPPERM,
    ND_INS_VPROLD,
    ND_INS_VPROLQ,
    ND_INS_VPROLVD,
    ND_INS_VPROLVQ,
    ND_INS_VPRORD,
    ND_INS_VPRORQ,
    ND_INS_VPRORVD,
    ND_INS_VPRORVQ,
    ND_INS_VPROTB,
    ND_INS_VPROTD,
    ND_INS_VPROTQ,
    ND_INS_VPROTW,
    ND_INS_VPSADBW,
    ND_INS_VPSCATTERDD,
    ND_INS_VPSCATTERDQ,
    ND_INS_VPSCATTERQD,
    ND_INS_VPSCATTERQQ,
    ND_INS_VPSHAB,
    ND_INS_VPSHAD,
    ND_INS_VPSHAQ,
    ND_INS_VPSHAW,
    ND_INS_VPSHLB,
    ND_INS_VPSHLD,
    ND_INS_VPSHLDD,
    ND_INS_VPSHLDQ,
    ND_INS_VPSHLDVD,
    ND_INS_VPSHLDVQ,
    ND_INS_VPSHLDVW,
    ND_INS_VPSHLDW,
    ND_INS_VPSHLQ,
    ND_INS_VPSHLW,
    ND_INS_VPSHRDD,
    ND_INS_VPSHRDQ,
    ND_INS_VPSHRDVD,
    ND_INS_VPSHRDVQ,
    ND_INS_VPSHRDVW,
    ND_INS_VPSHRDW,
    ND_INS_VPSHUFB,
    ND_INS_VPSHUFBITQMB,
    ND_INS_VPSHUFD,
    ND_INS_VPSHUFHW,
    ND_INS_VPSHUFLW,
    ND_INS_VPSIGNB,
    ND_INS_VPSIGND,
    ND_INS_VPSIGNW,
    ND_INS_VPSLLD,
    ND_INS_VPSLLDQ,
    ND_INS_VPSLLQ,
    ND_INS_VPSLLVD,
    ND_INS_VPSLLVQ,
    ND_INS_VPSLLVW,
    ND_INS_VPSLLW,
    ND_INS_VPSRAD,
    ND_INS_VPSRAQ,
    ND_INS_VPSRAVD,
    ND_INS_VPSRAVQ,
    ND_INS_VPSRAVW,
    ND_INS_VPSRAW,
    ND_INS_VPSRLD,
    ND_INS_VPSRLDQ,
    ND_INS_VPSRLQ,
    ND_INS_VPSRLVD,
    ND_INS_VPSRLVQ,
    ND_INS_VPSRLVW,
    ND_INS_VPSRLW,
    ND_INS_VPSUBB,
    ND_INS_VPSUBD,
    ND_INS_VPSUBQ,
    ND_INS_VPSUBSB,
    ND_INS_VPSUBSW,
    ND_INS_VPSUBUSB,
    ND_INS_VPSUBUSW,
    ND_INS_VPSUBW,
    ND_INS_VPTERNLOGD,
    ND_INS_VPTERNLOGQ,
    ND_INS_VPTEST,
    ND_INS_VPTESTMB,
    ND_INS_VPTESTMD,
    ND_INS_VPTESTMQ,
    ND_INS_VPTESTMW,
    ND_INS_VPTESTNMB,
    ND_INS_VPTESTNMD,
    ND_INS_VPTESTNMQ,
    ND_INS_VPTESTNMW,
    ND_INS_VPUNPCKHBW,
    ND_INS_VPUNPCKHDQ,
    ND_INS_VPUNPCKHQDQ,
    ND_INS_VPUNPCKHWD,
    ND_INS_VPUNPCKLBW,
    ND_INS_VPUNPCKLDQ,
    ND_INS_VPUNPCKLQDQ,
    ND_INS_VPUNPCKLWD,
    ND_INS_VPXOR,
    ND_INS_VPXORD,
    ND_INS_VPXORQ,
    ND_INS_VRANGEPD,
    ND_INS_VRANGEPS,
    ND_INS_VRANGESD,
    ND_INS_VRANGESS,
    ND_INS_VRCP14PD,
    ND_INS_VRCP14PS,
    ND_INS_VRCP14SD,
    ND_INS_VRCP14SS,
    ND_INS_VRCP28PD,
    ND_INS_VRCP28PS,
    ND_INS_VRCP28SD,
    ND_INS_VRCP28SS,
    ND_INS_VRCPPH,
    ND_INS_VRCPPS,
    ND_INS_VRCPSH,
    ND_INS_VRCPSS,
    ND_INS_VREDUCEPD,
    ND_INS_VREDUCEPH,
    ND_INS_VREDUCEPS,
    ND_INS_VREDUCESD,
    ND_INS_VREDUCESH,
    ND_INS_VREDUCESS,
    ND_INS_VRNDSCALEPD,
    ND_INS_VRNDSCALEPH,
    ND_INS_VRNDSCALEPS,
    ND_INS_VRNDSCALESD,
    ND_INS_VRNDSCALESH,
    ND_INS_VRNDSCALESS,
    ND_INS_VROUNDPD,
    ND_INS_VROUNDPS,
    ND_INS_VROUNDSD,
    ND_INS_VROUNDSS,
    ND_INS_VRSQRT14PD,
    ND_INS_VRSQRT14PS,
    ND_INS_VRSQRT14SD,
    ND_INS_VRSQRT14SS,
    ND_INS_VRSQRT28PD,
    ND_INS_VRSQRT28PS,
    ND_INS_VRSQRT28SD,
    ND_INS_VRSQRT28SS,
    ND_INS_VRSQRTPH,
    ND_INS_VRSQRTPS,
    ND_INS_VRSQRTSH,
    ND_INS_VRSQRTSS,
    ND_INS_VSCALEFPD,
    ND_INS_VSCALEFPH,
    ND_INS_VSCALEFPS,
    ND_INS_VSCALEFSD,
    ND_INS_VSCALEFSH,
    ND_INS_VSCALEFSS,
    ND_INS_VSCATTERDPD,
    ND_INS_VSCATTERDPS,
    ND_INS_VSCATTERPF0DPD,
    ND_INS_VSCATTERPF0DPS,
    ND_INS_VSCATTERPF0QPD,
    ND_INS_VSCATTERPF0QPS,
    ND_INS_VSCATTERPF1DPD,
    ND_INS_VSCATTERPF1DPS,
    ND_INS_VSCATTERPF1QPD,
    ND_INS_VSCATTERPF1QPS,
    ND_INS_VSCATTERQPD,
    ND_INS_VSCATTERQPS,
    ND_INS_VSHA512MSG1,
    ND_INS_VSHA512MSG2,
    ND_INS_VSHA512RNDS2,
    ND_INS_VSHUFF32X4,
    ND_INS_VSHUFF64X2,
    ND_INS_VSHUFI32X4,
    ND_INS_VSHUFI64X2,
    ND_INS_VSHUFPD,
    ND_INS_VSHUFPS,
    ND_INS_VSM3MSG1,
    ND_INS_VSM3MSG2,
    ND_INS_VSM3RNDS2,
    ND_INS_VSM4KEY4,
    ND_INS_VSM4RNDS4,
    ND_INS_VSQRTPD,
    ND_INS_VSQRTPH,
    ND_INS_VSQRTPS,
    ND_INS_VSQRTSD,
    ND_INS_VSQRTSH,
    ND_INS_VSQRTSS,
    ND_INS_VSTMXCSR,
    ND_INS_VSUBPD,
    ND_INS_VSUBPH,
    ND_INS_VSUBPS,
    ND_INS_VSUBSD,
    ND_INS_VSUBSH,
    ND_INS_VSUBSS,
    ND_INS_VTESTPD,
    ND_INS_VTESTPS,
    ND_INS_VUCOMISD,
    ND_INS_VUCOMISH,
    ND_INS_VUCOMISS,
    ND_INS_VUNPCKHPD,
    ND_INS_VUNPCKHPS,
    ND_INS_VUNPCKLPD,
    ND_INS_VUNPCKLPS,
    ND_INS_VXORPD,
    ND_INS_VXORPS,
    ND_INS_VZEROALL,
    ND_INS_VZEROUPPER,
    ND_INS_WAIT,
    ND_INS_WBINVD,
    ND_INS_WBNOINVD,
    ND_INS_WRFSBASE,
    ND_INS_WRGSBASE,
    ND_INS_WRMSR,
    ND_INS_WRMSRLIST,
    ND_INS_WRMSRNS,
    ND_INS_WRPKRU,
    ND_INS_WRSHR,
    ND_INS_WRSS,
    ND_INS_WRUSS,
    ND_INS_XABORT,
    ND_INS_XADD,
    ND_INS_XBEGIN,
    ND_INS_XCHG,
    ND_INS_XCRYPTCBC,
    ND_INS_XCRYPTCFB,
    ND_INS_XCRYPTCTR,
    ND_INS_XCRYPTECB,
    ND_INS_XCRYPTOFB,
    ND_INS_XEND,
    ND_INS_XGETBV,
    ND_INS_XLATB,
    ND_INS_XOR,
    ND_INS_XORPD,
    ND_INS_XORPS,
    ND_INS_XRESLDTRK,
    ND_INS_XRSTOR,
    ND_INS_XRSTORS,
    ND_INS_XSAVE,
    ND_INS_XSAVEC,
    ND_INS_XSAVEOPT,
    ND_INS_XSAVES,
    ND_INS_XSETBV,
    ND_INS_XSHA1,
    ND_INS_XSHA256,
    ND_INS_XSTORE,
    ND_INS_XSUSLDTRK,
    ND_INS_XTEST,

} ND_INS_CLASS;


typedef enum _ND_INS_SET
{
    ND_SET_INVALID = 0,
    ND_SET_3DNOW,
    ND_SET_ADX,
    ND_SET_AES,
    ND_SET_AMD,
    ND_SET_AMXBF16,
    ND_SET_AMXCOMPLEX,
    ND_SET_AMXFP16,
    ND_SET_AMXINT8,
    ND_SET_AMXTILE,
    ND_SET_AVX,
    ND_SET_AVX2,
    ND_SET_AVX2GATHER,
    ND_SET_AVX5124FMAPS,
    ND_SET_AVX5124VNNIW,
    ND_SET_AVX512BF16,
    ND_SET_AVX512BITALG,
    ND_SET_AVX512BW,
    ND_SET_AVX512CD,
    ND_SET_AVX512DQ,
    ND_SET_AVX512ER,
    ND_SET_AVX512F,
    ND_SET_AVX512FP16,
    ND_SET_AVX512IFMA,
    ND_SET_AVX512PF,
    ND_SET_AVX512VBMI,
    ND_SET_AVX512VBMI2,
    ND_SET_AVX512VNNI,
    ND_SET_AVX512VP2INTERSECT,
    ND_SET_AVX512VPOPCNTDQ,
    ND_SET_AVXIFMA,
    ND_SET_AVXNECONVERT,
    ND_SET_AVXVNNI,
    ND_SET_AVXVNNIINT16,
    ND_SET_AVXVNNIINT8,
    ND_SET_BMI1,
    ND_SET_BMI2,
    ND_SET_CET_IBT,
    ND_SET_CET_SS,
    ND_SET_CLDEMOTE,
    ND_SET_CLFSH,
    ND_SET_CLFSHOPT,
    ND_SET_CLWB,
    ND_SET_CLZERO,
    ND_SET_CMPCCXADD,
    ND_SET_CMPXCHG16B,
    ND_SET_CYRIX,
    ND_SET_CYRIX_SMM,
    ND_SET_ENQCMD,
    ND_SET_F16C,
    ND_SET_FMA,
    ND_SET_FMA4,
    ND_SET_FRED,
    ND_SET_FXSAVE,
    ND_SET_GFNI,
    ND_SET_HRESET,
    ND_SET_I186,
    ND_SET_I286PROT,
    ND_SET_I286REAL,
    ND_SET_I386,
    ND_SET_I486,
    ND_SET_I486REAL,
    ND_SET_I64,
    ND_SET_I86,
    ND_SET_INVLPGB,
    ND_SET_INVPCID,
    ND_SET_KL,
    ND_SET_LKGS,
    ND_SET_LONGMODE,
    ND_SET_LWP,
    ND_SET_LZCNT,
    ND_SET_MCOMMIT,
    ND_SET_MMX,
    ND_SET_MOVBE,
    ND_SET_MOVDIR64B,
    ND_SET_MOVDIRI,
    ND_SET_MPX,
    ND_SET_MSRLIST,
    ND_SET_MWAITT,
    ND_SET_PAUSE,
    ND_SET_PCLMULQDQ,
    ND_SET_PCONFIG,
    ND_SET_PENTIUMREAL,
    ND_SET_PKU,
    ND_SET_POPCNT,
    ND_SET_PPRO,
    ND_SET_PREFETCHITI,
    ND_SET_PREFETCH_NOP,
    ND_SET_PTWRITE,
    ND_SET_RAOINT,
    ND_SET_RDPID,
    ND_SET_RDPMC,
    ND_SET_RDPRU,
    ND_SET_RDRAND,
    ND_SET_RDSEED,
    ND_SET_RDTSCP,
    ND_SET_RDWRFSGS,
    ND_SET_SERIALIZE,
    ND_SET_SGX,
    ND_SET_SHA,
    ND_SET_SHA512,
    ND_SET_SM3,
    ND_SET_SM4,
    ND_SET_SMAP,
    ND_SET_SMX,
    ND_SET_SNP,
    ND_SET_SSE,
    ND_SET_SSE2,
    ND_SET_SSE3,
    ND_SET_SSE4,
    ND_SET_SSE42,
    ND_SET_SSE4A,
    ND_SET_SSSE3,
    ND_SET_SVM,
    ND_SET_TBM,
    ND_SET_TDX,
    ND_SET_TSE,
    ND_SET_TSX,
    ND_SET_TSXLDTRK,
    ND_SET_UD,
    ND_SET_UINTR,
    ND_SET_UNKNOWN,
    ND_SET_VAES,
    ND_SET_VPCLMULQDQ,
    ND_SET_VTX,
    ND_SET_WAITPKG,
    ND_SET_WBNOINVD,
    ND_SET_WRMSRNS,
    ND_SET_X87,
    ND_SET_XOP,
    ND_SET_XSAVE,
    ND_SET_XSAVEC,
    ND_SET_XSAVES,

} ND_INS_SET;


typedef enum _ND_INS_TYPE
{
    ND_CAT_INVALID = 0,
    ND_CAT_3DNOW,
    ND_CAT_AES,
    ND_CAT_AESKL,
    ND_CAT_AMX,
    ND_CAT_ARITH,
    ND_CAT_AVX,
    ND_CAT_AVX2,
    ND_CAT_AVX2GATHER,
    ND_CAT_AVX512,
    ND_CAT_AVX512BF16,
    ND_CAT_AVX512FP16,
    ND_CAT_AVX512VBMI,
    ND_CAT_AVX512VP2INTERSECT,
    ND_CAT_AVXIFMA,
    ND_CAT_AVXNECONVERT,
    ND_CAT_AVXVNNI,
    ND_CAT_AVXVNNIINT16,
    ND_CAT_AVXVNNIINT8,
    ND_CAT_BITBYTE,
    ND_CAT_BLEND,
    ND_CAT_BMI1,
    ND_CAT_BMI2,
    ND_CAT_BROADCAST,
    ND_CAT_CALL,
    ND_CAT_CET,
    ND_CAT_CLDEMOTE,
    ND_CAT_CMOV,
    ND_CAT_CMPCCXADD,
    ND_CAT_COMPRESS,
    ND_CAT_COND_BR,
    ND_CAT_CONFLICT,
    ND_CAT_CONVERT,
    ND_CAT_DATAXFER,
    ND_CAT_DECIMAL,
    ND_CAT_ENQCMD,
    ND_CAT_EXPAND,
    ND_CAT_FLAGOP,
    ND_CAT_FMA4,
    ND_CAT_GATHER,
    ND_CAT_GFNI,
    ND_CAT_HRESET,
    ND_CAT_I386,
    ND_CAT_IFMA,
    ND_CAT_INTERRUPT,
    ND_CAT_IO,
    ND_CAT_IOSTRINGOP,
    ND_CAT_KL,
    ND_CAT_KMASK,
    ND_CAT_KNL,
    ND_CAT_LKGS,
    ND_CAT_LOGIC,
    ND_CAT_LOGICAL,
    ND_CAT_LOGICAL_FP,
    ND_CAT_LWP,
    ND_CAT_LZCNT,
    ND_CAT_MISC,
    ND_CAT_MMX,
    ND_CAT_MOVDIR64B,
    ND_CAT_MOVDIRI,
    ND_CAT_MPX,
    ND_CAT_NOP,
    ND_CAT_PADLOCK,
    ND_CAT_PCLMULQDQ,
    ND_CAT_PCONFIG,
    ND_CAT_POP,
    ND_CAT_PREFETCH,
    ND_CAT_PTWRITE,
    ND_CAT_PUSH,
    ND_CAT_RAOINT,
    ND_CAT_RDPID,
    ND_CAT_RDRAND,
    ND_CAT_RDSEED,
    ND_CAT_RDWRFSGS,
    ND_CAT_RET,
    ND_CAT_ROTATE,
    ND_CAT_SCATTER,
    ND_CAT_SEGOP,
    ND_CAT_SEMAPHORE,
    ND_CAT_SGX,
    ND_CAT_SHA,
    ND_CAT_SHA512,
    ND_CAT_SHIFT,
    ND_CAT_SM3,
    ND_CAT_SM4,
    ND_CAT_SMAP,
    ND_CAT_SSE,
    ND_CAT_SSE2,
    ND_CAT_STRINGOP,
    ND_CAT_STTNI,
    ND_CAT_SYSCALL,
    ND_CAT_SYSRET,
    ND_CAT_SYSTEM,
    ND_CAT_TDX,
    ND_CAT_UD,
    ND_CAT_UINTR,
    ND_CAT_UNCOND_BR,
    ND_CAT_UNKNOWN,
    ND_CAT_VAES,
    ND_CAT_VFMA,
    ND_CAT_VFMAPS,
    ND_CAT_VNNI,
    ND_CAT_VNNIW,
    ND_CAT_VPCLMULQDQ,
    ND_CAT_VPOPCNT,
    ND_CAT_VTX,
    ND_CAT_WAITPKG,
    ND_CAT_WBNOINVD,
    ND_CAT_WIDENOP,
    ND_CAT_WIDE_KL,
    ND_CAT_X87_ALU,
    ND_CAT_XOP,
    ND_CAT_XSAVE,

} ND_INS_CATEGORY;



#endif
