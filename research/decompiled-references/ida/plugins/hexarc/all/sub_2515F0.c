__int64 __fastcall sub_2515F0(__int64 *a1)
{
  unsigned __int64 **v2; // rbp
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 **v5; // rbp
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 **v8; // rbp
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 **v11; // rbp
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // r13
  unsigned __int64 **v14; // rbp
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 **v17; // rbp
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // r13
  __int64 result; // rax
  unsigned __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // r14
  __int64 *v24; // rdi
  __int64 *v25; // rdi
  unsigned __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // r14
  __int64 *v29; // rdi
  __int64 *v30; // rdi
  unsigned __int64 v31; // r12
  __int64 v32; // r14
  __int64 v33; // r14
  __int64 *v34; // rdi
  __int64 *v35; // rdi
  unsigned __int64 v36; // r12
  __int64 v37; // r14
  __int64 v38; // r14
  __int64 *v39; // rdi
  __int64 *v40; // rdi
  unsigned __int64 v41; // r12
  __int64 v42; // r14
  __int64 v43; // r14
  __int64 *v44; // rdi
  __int64 *v45; // rdi
  __int64 *v46; // r12
  __int64 v47; // rdx
  __int64 *v48; // r13
  __int64 v49; // rax
  __int64 *v50; // r13
  __int64 *v51; // rdi
  __int64 *v52; // rdi
  __int64 v53; // rax
  __int64 *v54; // rdi
  __int64 *v55; // rdi
  __int64 *v56; // rdi
  __int64 *v57; // rdi
  __int64 *v58; // rdi
  __int64 *v59; // rdi
  __int64 *v60; // rdi
  __int64 *v61; // rdi
  __int64 *v62; // rdi
  __int64 *v63; // rdi
  __int64 *v64; // rdi
  __int64 *v65; // rdi
  unsigned __int64 v66; // [rsp+8h] [rbp-30h]
  unsigned __int64 v67; // [rsp+8h] [rbp-30h]
  unsigned __int64 v68; // [rsp+8h] [rbp-30h]
  unsigned __int64 v69; // [rsp+8h] [rbp-30h]
  unsigned __int64 v70; // [rsp+8h] [rbp-30h]
  unsigned __int64 v71; // [rsp+8h] [rbp-30h]

  if ( a1[1] )
  {
    sub_7DBD0(a1[1]);
    j__qfree();
  }
  *(_QWORD *)(a1[27] + 1352) = 0;
  v2 = (unsigned __int64 **)a1[8];
  if ( v2 )
  {
    v3 = *v2;
    if ( !*v2 )
    {
LABEL_9:
      qfree();
      goto LABEL_10;
    }
    v4 = *v3;
    if ( !v2[1] )
    {
      *v3 = (unsigned __int64)v3 & 0xFFFFFFFFFFFFFFFCLL | *v3 & 3;
      *(__m128i *)(*v2 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v2, (__m128i)(unsigned __int64)*v2);
      **v2 &= ~1uLL;
      **v2 |= 2u;
      goto LABEL_7;
    }
    v26 = v4 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_73:
      *v3 = (unsigned __int64)v3 & 0xFFFFFFFFFFFFFFFCLL | v4 & 3;
      *(__m128i *)(*v2 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v2, (__m128i)(unsigned __int64)*v2);
      **v2 &= ~1uLL;
      **v2 |= 2u;
      v2[1] = nullptr;
LABEL_7:
      if ( *v2 )
        qfree();
      goto LABEL_9;
    }
    v27 = *(_QWORD *)(v26 + 8);
    if ( (*(_BYTE *)v27 & 2) != 0 )
    {
      v28 = *(_QWORD *)(v26 + 16);
      if ( (*(_BYTE *)v28 & 2) != 0 )
        goto LABEL_181;
      goto LABEL_63;
    }
    v58 = *(__int64 **)(v27 + 8);
    if ( (*(_BYTE *)v58 & 2) != 0 )
    {
      v59 = *(__int64 **)(v27 + 16);
      if ( (*(_BYTE *)v59 & 2) != 0 )
      {
LABEL_213:
        if ( *(_QWORD *)(v27 + 32) )
        {
          *(_QWORD *)(v27 + 40) = 0;
          qfree();
        }
        *(_QWORD *)v27 |= 2uLL;
LABEL_150:
        if ( v27 )
          qfree();
        v28 = *(_QWORD *)(v26 + 16);
        if ( (*(_BYTE *)v28 & 2) != 0 )
        {
LABEL_69:
          if ( (*(_BYTE *)v26 & 2) != 0 )
          {
LABEL_70:
            if ( v4 > 3 )
              qfree();
            v3 = *v2;
            v4 = **v2;
            goto LABEL_73;
          }
LABEL_181:
          if ( *(_QWORD *)(v26 + 32) )
          {
            *(_QWORD *)(v26 + 40) = 0;
            qfree();
          }
          *(_QWORD *)v26 |= 2uLL;
          goto LABEL_70;
        }
LABEL_63:
        v29 = *(__int64 **)(v28 + 8);
        if ( (*(_BYTE *)v29 & 2) != 0 )
        {
          v30 = *(__int64 **)(v28 + 16);
          if ( (*(_BYTE *)v30 & 2) != 0 )
            goto LABEL_209;
        }
        else
        {
          sub_24C700(v29);
          v30 = *(__int64 **)(v28 + 16);
          if ( (*(_BYTE *)v30 & 2) != 0 )
            goto LABEL_66;
        }
        sub_24C700(v30);
LABEL_66:
        if ( (*(_BYTE *)v28 & 2) != 0 )
        {
LABEL_67:
          if ( v28 )
            qfree();
          goto LABEL_69;
        }
LABEL_209:
        if ( *(_QWORD *)(v28 + 32) )
        {
          *(_QWORD *)(v28 + 40) = 0;
          qfree();
        }
        *(_QWORD *)v28 |= 2uLL;
        goto LABEL_67;
      }
    }
    else
    {
      sub_24C700(v58);
      v59 = *(__int64 **)(v27 + 16);
      if ( (*(_BYTE *)v59 & 2) != 0 )
        goto LABEL_149;
    }
    sub_24C700(v59);
LABEL_149:
    if ( (*(_BYTE *)v27 & 2) != 0 )
      goto LABEL_150;
    goto LABEL_213;
  }
LABEL_10:
  v5 = (unsigned __int64 **)a1[9];
  if ( !v5 )
    goto LABEL_17;
  v6 = *v5;
  if ( *v5 )
  {
    v7 = *v6;
    if ( !v5[1] )
    {
      *v6 = *v6 & 3 | (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v5 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v5, (__m128i)(unsigned __int64)*v5);
      **v5 &= ~1uLL;
      **v5 |= 2u;
      goto LABEL_14;
    }
    v36 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_101:
      *v6 = v7 & 3 | (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v5 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v5, (__m128i)(unsigned __int64)*v5);
      **v5 &= ~1uLL;
      **v5 |= 2u;
      v5[1] = nullptr;
LABEL_14:
      if ( *v5 )
        qfree();
      goto LABEL_16;
    }
    v37 = *(_QWORD *)(v36 + 8);
    if ( (*(_BYTE *)v37 & 2) != 0 )
    {
      v38 = *(_QWORD *)(v36 + 16);
      if ( (*(_BYTE *)v38 & 2) != 0 )
        goto LABEL_191;
      goto LABEL_91;
    }
    v62 = *(__int64 **)(v37 + 8);
    if ( (*(_BYTE *)v62 & 2) != 0 )
    {
      v63 = *(__int64 **)(v37 + 16);
      if ( (*(_BYTE *)v63 & 2) != 0 )
      {
LABEL_203:
        if ( *(_QWORD *)(v37 + 40) )
        {
          *(_QWORD *)(v37 + 48) = 0;
          qfree();
        }
        *(_QWORD *)v37 |= 2uLL;
LABEL_166:
        if ( v37 )
          qfree();
        v38 = *(_QWORD *)(v36 + 16);
        if ( (*(_BYTE *)v38 & 2) != 0 )
        {
LABEL_97:
          if ( (*(_BYTE *)v36 & 2) != 0 )
          {
LABEL_98:
            if ( v7 > 3 )
              qfree();
            v6 = *v5;
            v7 = **v5;
            goto LABEL_101;
          }
LABEL_191:
          if ( *(_QWORD *)(v36 + 40) )
          {
            *(_QWORD *)(v36 + 48) = 0;
            qfree();
          }
          *(_QWORD *)v36 |= 2uLL;
          goto LABEL_98;
        }
LABEL_91:
        v39 = *(__int64 **)(v38 + 8);
        if ( (*(_BYTE *)v39 & 2) != 0 )
        {
          v40 = *(__int64 **)(v38 + 16);
          if ( (*(_BYTE *)v40 & 2) != 0 )
            goto LABEL_217;
        }
        else
        {
          sub_24C5D0(v39);
          v40 = *(__int64 **)(v38 + 16);
          if ( (*(_BYTE *)v40 & 2) != 0 )
            goto LABEL_94;
        }
        sub_24C5D0(v40);
LABEL_94:
        if ( (*(_BYTE *)v38 & 2) != 0 )
        {
LABEL_95:
          if ( v38 )
            qfree();
          goto LABEL_97;
        }
LABEL_217:
        if ( *(_QWORD *)(v38 + 40) )
        {
          *(_QWORD *)(v38 + 48) = 0;
          qfree();
        }
        *(_QWORD *)v38 |= 2uLL;
        goto LABEL_95;
      }
    }
    else
    {
      sub_24C5D0(v62);
      v63 = *(__int64 **)(v37 + 16);
      if ( (*(_BYTE *)v63 & 2) != 0 )
        goto LABEL_165;
    }
    sub_24C5D0(v63);
LABEL_165:
    if ( (*(_BYTE *)v37 & 2) != 0 )
      goto LABEL_166;
    goto LABEL_203;
  }
LABEL_16:
  qfree();
LABEL_17:
  v8 = (unsigned __int64 **)a1[11];
  if ( !v8 )
    goto LABEL_24;
  v9 = *v8;
  if ( *v8 )
  {
    v10 = *v9;
    if ( !v8[1] )
    {
      *v9 = *v9 & 3 | (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v8 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v8, (__m128i)(unsigned __int64)*v8);
      **v8 &= ~1uLL;
      **v8 |= 2u;
      goto LABEL_21;
    }
    v46 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
    v47 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v47 & 2) != 0 )
    {
LABEL_129:
      *v9 = v10 & 3 | (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v8 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v8, (__m128i)(unsigned __int64)*v8);
      **v8 &= ~1uLL;
      **v8 |= 2u;
      v8[1] = nullptr;
LABEL_21:
      if ( *v8 )
        qfree();
      goto LABEL_23;
    }
    v48 = (__int64 *)v46[1];
    v49 = *v48;
    if ( (*v48 & 2) != 0 )
    {
      v50 = (__int64 *)v46[2];
      if ( (*(_BYTE *)v50 & 2) != 0 )
        goto LABEL_187;
      goto LABEL_119;
    }
    v54 = (__int64 *)v48[1];
    if ( (*(_BYTE *)v54 & 2) != 0 )
    {
      v55 = (__int64 *)v48[2];
      if ( (*(_BYTE *)v55 & 2) != 0 )
      {
LABEL_207:
        *v48 = v49 | 2;
LABEL_134:
        if ( v48 )
        {
          v71 = v10;
          qfree();
          v10 = v71;
        }
        v50 = (__int64 *)v46[2];
        if ( (*(_BYTE *)v50 & 2) != 0 )
        {
LABEL_125:
          v47 = *v46;
          if ( (*v46 & 2) != 0 )
          {
LABEL_126:
            if ( v10 > 3 )
              qfree();
            v9 = *v8;
            v10 = **v8;
            goto LABEL_129;
          }
LABEL_187:
          *v46 = v47 | 2;
          goto LABEL_126;
        }
LABEL_119:
        v51 = (__int64 *)v50[1];
        if ( (*(_BYTE *)v51 & 2) != 0 )
        {
          v52 = (__int64 *)v50[2];
          if ( (*(_BYTE *)v52 & 2) != 0 )
          {
            v53 = *v50;
LABEL_238:
            *v50 = v53 | 2;
LABEL_123:
            if ( v50 )
            {
              v68 = v10;
              qfree();
              v10 = v68;
            }
            goto LABEL_125;
          }
        }
        else
        {
          v66 = v10;
          sub_24C050(v51);
          v52 = (__int64 *)v50[2];
          v10 = v66;
          if ( (*(_BYTE *)v52 & 2) != 0 )
            goto LABEL_122;
        }
        v67 = v10;
        sub_24C050(v52);
        v10 = v67;
LABEL_122:
        v53 = *v50;
        if ( (*v50 & 2) != 0 )
          goto LABEL_123;
        goto LABEL_238;
      }
    }
    else
    {
      v69 = v10;
      sub_24C050(v54);
      v55 = (__int64 *)v48[2];
      v10 = v69;
      if ( (*(_BYTE *)v55 & 2) != 0 )
        goto LABEL_133;
    }
    v70 = v10;
    sub_24C050(v55);
    v10 = v70;
LABEL_133:
    v49 = *v48;
    if ( (*v48 & 2) != 0 )
      goto LABEL_134;
    goto LABEL_207;
  }
LABEL_23:
  qfree();
LABEL_24:
  v11 = (unsigned __int64 **)a1[12];
  if ( !v11 )
    goto LABEL_31;
  v12 = *v11;
  if ( *v11 )
  {
    v13 = *v12;
    if ( !v11[1] )
    {
      *v12 = *v12 & 3 | (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v11 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v11, (__m128i)(unsigned __int64)*v11);
      **v11 &= ~1uLL;
      **v11 |= 2u;
      goto LABEL_28;
    }
    v31 = v13 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_87:
      *v12 = v13 & 3 | (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v11 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v11, (__m128i)(unsigned __int64)*v11);
      **v11 &= ~1uLL;
      **v11 |= 2u;
      v11[1] = nullptr;
LABEL_28:
      if ( *v11 )
        qfree();
      goto LABEL_30;
    }
    v32 = *(_QWORD *)(v31 + 8);
    if ( (*(_BYTE *)v32 & 2) != 0 )
    {
      v33 = *(_QWORD *)(v31 + 16);
      if ( (*(_BYTE *)v33 & 2) != 0 )
        goto LABEL_188;
      goto LABEL_77;
    }
    v60 = *(__int64 **)(v32 + 8);
    if ( (*(_BYTE *)v60 & 2) != 0 )
    {
      v61 = *(__int64 **)(v32 + 16);
      if ( (*(_BYTE *)v61 & 2) != 0 )
      {
LABEL_233:
        if ( *(_QWORD *)(v32 + 32) )
        {
          *(_QWORD *)(v32 + 40) = 0;
          qfree();
        }
        *(_QWORD *)v32 |= 2uLL;
LABEL_158:
        if ( v32 )
          qfree();
        v33 = *(_QWORD *)(v31 + 16);
        if ( (*(_BYTE *)v33 & 2) != 0 )
        {
LABEL_83:
          if ( (*(_BYTE *)v31 & 2) != 0 )
          {
LABEL_84:
            if ( v13 > 3 )
              qfree();
            v12 = *v11;
            v13 = **v11;
            goto LABEL_87;
          }
LABEL_188:
          if ( *(_QWORD *)(v31 + 32) )
          {
            *(_QWORD *)(v31 + 40) = 0;
            qfree();
          }
          *(_QWORD *)v31 |= 2uLL;
          goto LABEL_84;
        }
LABEL_77:
        v34 = *(__int64 **)(v33 + 8);
        if ( (*(_BYTE *)v34 & 2) != 0 )
        {
          v35 = *(__int64 **)(v33 + 16);
          if ( (*(_BYTE *)v35 & 2) != 0 )
            goto LABEL_225;
        }
        else
        {
          sub_24C4A0(v34);
          v35 = *(__int64 **)(v33 + 16);
          if ( (*(_BYTE *)v35 & 2) != 0 )
            goto LABEL_80;
        }
        sub_24C4A0(v35);
LABEL_80:
        if ( (*(_BYTE *)v33 & 2) != 0 )
        {
LABEL_81:
          if ( v33 )
            qfree();
          goto LABEL_83;
        }
LABEL_225:
        if ( *(_QWORD *)(v33 + 32) )
        {
          *(_QWORD *)(v33 + 40) = 0;
          qfree();
        }
        *(_QWORD *)v33 |= 2uLL;
        goto LABEL_81;
      }
    }
    else
    {
      sub_24C4A0(v60);
      v61 = *(__int64 **)(v32 + 16);
      if ( (*(_BYTE *)v61 & 2) != 0 )
        goto LABEL_157;
    }
    sub_24C4A0(v61);
LABEL_157:
    if ( (*(_BYTE *)v32 & 2) != 0 )
      goto LABEL_158;
    goto LABEL_233;
  }
LABEL_30:
  qfree();
LABEL_31:
  v14 = (unsigned __int64 **)a1[14];
  if ( !v14 )
    goto LABEL_38;
  v15 = *v14;
  if ( *v14 )
  {
    v16 = *v15;
    if ( !v14[1] )
    {
      *v15 = *v15 & 3 | (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v14 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v14, (__m128i)(unsigned __int64)*v14);
      **v14 &= ~1uLL;
      **v14 |= 2u;
      goto LABEL_35;
    }
    v41 = v16 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v16 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_115:
      *v15 = v16 & 3 | (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v14 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v14, (__m128i)(unsigned __int64)*v14);
      **v14 &= ~1uLL;
      **v14 |= 2u;
      v14[1] = nullptr;
LABEL_35:
      if ( *v14 )
        qfree();
      goto LABEL_37;
    }
    v42 = *(_QWORD *)(v41 + 8);
    if ( (*(_BYTE *)v42 & 2) != 0 )
    {
      v43 = *(_QWORD *)(v41 + 16);
      if ( (*(_BYTE *)v43 & 2) != 0 )
        goto LABEL_178;
      goto LABEL_105;
    }
    v64 = *(__int64 **)(v42 + 8);
    if ( (*(_BYTE *)v64 & 2) != 0 )
    {
      v65 = *(__int64 **)(v42 + 16);
      if ( (*(_BYTE *)v65 & 2) != 0 )
      {
LABEL_195:
        if ( *(_QWORD *)(v42 + 32) )
        {
          *(_QWORD *)(v42 + 40) = 0;
          qfree();
        }
        *(_QWORD *)v42 |= 2uLL;
LABEL_174:
        if ( v42 )
          qfree();
        v43 = *(_QWORD *)(v41 + 16);
        if ( (*(_BYTE *)v43 & 2) != 0 )
        {
LABEL_111:
          if ( (*(_BYTE *)v41 & 2) != 0 )
          {
LABEL_112:
            if ( v16 > 3 )
              qfree();
            v15 = *v14;
            v16 = **v14;
            goto LABEL_115;
          }
LABEL_178:
          if ( *(_QWORD *)(v41 + 32) )
          {
            *(_QWORD *)(v41 + 40) = 0;
            qfree();
          }
          *(_QWORD *)v41 |= 2uLL;
          goto LABEL_112;
        }
LABEL_105:
        v44 = *(__int64 **)(v43 + 8);
        if ( (*(_BYTE *)v44 & 2) != 0 )
        {
          v45 = *(__int64 **)(v43 + 16);
          if ( (*(_BYTE *)v45 & 2) != 0 )
            goto LABEL_199;
        }
        else
        {
          sub_24C370(v44);
          v45 = *(__int64 **)(v43 + 16);
          if ( (*(_BYTE *)v45 & 2) != 0 )
            goto LABEL_108;
        }
        sub_24C370(v45);
LABEL_108:
        if ( (*(_BYTE *)v43 & 2) != 0 )
        {
LABEL_109:
          if ( v43 )
            qfree();
          goto LABEL_111;
        }
LABEL_199:
        if ( *(_QWORD *)(v43 + 32) )
        {
          *(_QWORD *)(v43 + 40) = 0;
          qfree();
        }
        *(_QWORD *)v43 |= 2uLL;
        goto LABEL_109;
      }
    }
    else
    {
      sub_24C370(v64);
      v65 = *(__int64 **)(v42 + 16);
      if ( (*(_BYTE *)v65 & 2) != 0 )
        goto LABEL_173;
    }
    sub_24C370(v65);
LABEL_173:
    if ( (*(_BYTE *)v42 & 2) != 0 )
      goto LABEL_174;
    goto LABEL_195;
  }
LABEL_37:
  qfree();
LABEL_38:
  v17 = (unsigned __int64 **)a1[15];
  if ( v17 )
  {
    v18 = *v17;
    if ( !*v17 )
    {
LABEL_44:
      qfree();
      goto LABEL_45;
    }
    v19 = *v18;
    if ( !v17[1] )
    {
      *v18 = *v18 & 3 | (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v17 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v17, (__m128i)(unsigned __int64)*v17);
      **v17 &= ~1uLL;
      **v17 |= 2u;
      goto LABEL_42;
    }
    v21 = v19 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v19 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_59:
      *v18 = v19 & 3 | (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v17 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v17, (__m128i)(unsigned __int64)*v17);
      **v17 &= ~1uLL;
      **v17 |= 2u;
      v17[1] = nullptr;
LABEL_42:
      if ( *v17 )
        qfree();
      goto LABEL_44;
    }
    v22 = *(_QWORD *)(v21 + 8);
    if ( (*(_BYTE *)v22 & 2) != 0 )
    {
      v23 = *(_QWORD *)(v21 + 16);
      if ( (*(_BYTE *)v23 & 2) != 0 )
        goto LABEL_184;
      goto LABEL_49;
    }
    v56 = *(__int64 **)(v22 + 8);
    if ( (*(_BYTE *)v56 & 2) != 0 )
    {
      v57 = *(__int64 **)(v22 + 16);
      if ( (*(_BYTE *)v57 & 2) != 0 )
      {
LABEL_221:
        if ( *(_QWORD *)(v22 + 32) )
        {
          *(_QWORD *)(v22 + 40) = 0;
          qfree();
        }
        *(_QWORD *)v22 |= 2uLL;
LABEL_142:
        if ( v22 )
          qfree();
        v23 = *(_QWORD *)(v21 + 16);
        if ( (*(_BYTE *)v23 & 2) != 0 )
        {
LABEL_55:
          if ( (*(_BYTE *)v21 & 2) != 0 )
          {
LABEL_56:
            if ( v19 > 3 )
              qfree();
            v18 = *v17;
            v19 = **v17;
            goto LABEL_59;
          }
LABEL_184:
          if ( *(_QWORD *)(v21 + 32) )
          {
            *(_QWORD *)(v21 + 40) = 0;
            qfree();
          }
          *(_QWORD *)v21 |= 2uLL;
          goto LABEL_56;
        }
LABEL_49:
        v24 = *(__int64 **)(v23 + 8);
        if ( (*(_BYTE *)v24 & 2) != 0 )
        {
          v25 = *(__int64 **)(v23 + 16);
          if ( (*(_BYTE *)v25 & 2) != 0 )
            goto LABEL_229;
        }
        else
        {
          sub_24C240(v24);
          v25 = *(__int64 **)(v23 + 16);
          if ( (*(_BYTE *)v25 & 2) != 0 )
            goto LABEL_52;
        }
        sub_24C240(v25);
LABEL_52:
        if ( (*(_BYTE *)v23 & 2) != 0 )
        {
LABEL_53:
          if ( v23 )
            qfree();
          goto LABEL_55;
        }
LABEL_229:
        if ( *(_QWORD *)(v23 + 32) )
        {
          *(_QWORD *)(v23 + 40) = 0;
          qfree();
        }
        *(_QWORD *)v23 |= 2uLL;
        goto LABEL_53;
      }
    }
    else
    {
      sub_24C240(v56);
      v57 = *(__int64 **)(v22 + 16);
      if ( (*(_BYTE *)v57 & 2) != 0 )
        goto LABEL_141;
    }
    sub_24C240(v57);
LABEL_141:
    if ( (*(_BYTE *)v22 & 2) != 0 )
      goto LABEL_142;
    goto LABEL_221;
  }
LABEL_45:
  result = a1[27];
  --*(_DWORD *)(result + 896);
  return result;
}

