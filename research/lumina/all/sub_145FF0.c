unsigned __int64 __fastcall sub_145FF0(
        __int64 a1,
        unsigned __int8 **a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        double a7)
{
  __int64 v7; // rbp
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int8 *v14; // r8
  __int64 v15; // r15
  int v16; // eax
  int v18; // edx
  __int64 v19; // rcx
  int v20; // edi
  int *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // esi
  __int64 v25; // rax
  int v26; // ebp
  __int64 v27; // r12
  unsigned int v28; // r15d
  __int64 v29; // r14
  int v30; // eax
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // r10
  __int64 v34; // r14
  __int64 v35; // r12
  int v36; // ebx
  __int64 v37; // rax
  int *v38; // rcx
  __int64 v39; // rdx
  __int64 *v40; // rdx
  __int64 v41; // rdx
  __int64 *v42; // rax
  __int64 *v43; // rdx
  __int64 v44; // rdx
  signed int v48; // [rsp+10h] [rbp-A8h]
  _BYTE *v49; // [rsp+18h] [rbp-A0h]
  __int64 *v50; // [rsp+18h] [rbp-A0h]
  __int64 *v51; // [rsp+18h] [rbp-A0h]
  __int64 *v52; // [rsp+20h] [rbp-98h]
  int *v53; // [rsp+20h] [rbp-98h]
  char v54; // [rsp+20h] [rbp-98h]
  int v55; // [rsp+40h] [rbp-78h]
  __int64 v56; // [rsp+48h] [rbp-70h]
  __int64 v57; // [rsp+48h] [rbp-70h]
  int v58; // [rsp+48h] [rbp-70h]
  int v59; // [rsp+48h] [rbp-70h]
  int v60; // [rsp+64h] [rbp-54h] BYREF
  __int64 v61; // [rsp+68h] [rbp-50h] BYREF
  int *v62; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v63; // [rsp+78h] [rbp-40h]

  v7 = *(_QWORD *)a1;
  v63 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(v7 + 49) & 0x40) == 0 || *((_BYTE *)a2 + 63) )
    return __readfsqword(0x28u) ^ v63;
  v10 = (__int64)a2[12];
  v11 = a1;
  v12 = -1048576;
  v48 = -32768;
  if ( v10 )
  {
    v48 = sub_CFB20(v7, v10);
    v12 = 32LL * v48;
  }
  v13 = (__int64)a2[9];
  v55 = *(unsigned __int8 *)(a1 + 215);
  v49 = *(_BYTE **)(*(_QWORD *)(v7 + 32) + v12);
  if ( !v13 )
    goto LABEL_41;
  do
  {
    v61 = 0;
    v62 = nullptr;
    v14 = *(unsigned __int8 **)(v13 + 16);
    if ( !a5 )
      goto LABEL_10;
    if ( *a2 )
    {
      if ( v14 && !(unsigned int)sub_CA2B0(*a2, *(unsigned __int8 **)(v13 + 16)) )
        goto LABEL_10;
    }
    else if ( !v14 )
    {
      goto LABEL_10;
    }
    v18 = *(_DWORD *)(v13 + 40);
    if ( v18 <= 0 )
      goto LABEL_39;
    v19 = *(int *)(v13 + 64);
    if ( *(int *)(a5 + 4 * v19) < 0 )
    {
      v20 = *((__int16 *)a2 + 26);
      if ( v20 != (_DWORD)v19 || !a6 )
      {
        v21 = (int *)(v13 + 80);
        while ( v21 != (int *)(v13 + 80 + 16LL * (unsigned int)(v18 - 1)) )
        {
          v22 = *v21;
          if ( *(int *)(a5 + 4 * v22) < 0 )
          {
            v21 += 4;
            if ( (_DWORD)v22 != v20 || !a6 )
              continue;
          }
          goto LABEL_10;
        }
        goto LABEL_39;
      }
    }
LABEL_10:
    if ( *(_BYTE *)(v11 + 215) )
      v15 = sub_CA640(v7, v14, v49);
    else
      v15 = sub_144100(v11, 0, v14, v49, a7);
    if ( v15 && (v16 = sub_E6250(v11, v15, v13, &v61, (unsigned __int8 *)&v62)) == 0 )
    {
      v53 = v62;
      if ( !v62 )
      {
        v60 = *(_DWORD *)(v13 + 64);
        v53 = &v60;
      }
      if ( *(int *)(v13 + 40) > 0 )
      {
        v57 = a5;
        v35 = v11;
        v36 = 0;
        do
        {
          v38 = &v53[v36];
          if ( *v38 == *((__int16 *)a2 + 26) )
            *v38 = -1;
          if ( *(_QWORD *)(v7 + 496) )
          {
            if ( v61 )
              v37 = *(__int16 *)(*(_QWORD *)(v61 + 8) + 2LL * v36);
            else
              v37 = *(__int16 *)(v15 + 52);
            v16 = sub_105B00(v35, *(const char **)v15, *(const char **)(*(_QWORD *)(v15 + 8) + 16 * v37), v48) == 2;
          }
          ++v36;
        }
        while ( *(_DWORD *)(v13 + 40) > v36 );
        v11 = v35;
        a5 = v57;
      }
      if ( v48 != 1 )
      {
        v58 = v16;
        sub_E30E0(v11, v48, *(_DWORD *)(v15 + 40), 0, *(_QWORD *)v15);
        v16 = v58;
      }
      ++*(_DWORD *)(v11 + 52);
      if ( a3 )
      {
        v59 = v16;
        sub_F28D0(v11, v48, v15, v61, v13, v53, a7, a3, 0xFFFFFFFF, v16);
        v16 = v59;
      }
      if ( a4 )
      {
        v39 = *(_QWORD *)(v11 + 160);
        if ( !v39 )
          v39 = v11;
        v40 = *(__int64 **)(v39 + 176);
        if ( !v40
          || ((v41 = *v40, v41 != *(_QWORD *)(v13 + 48)) || *(_BYTE *)(v13 + 45) != 8)
          && (v41 != *(_QWORD *)(v13 + 56) || *(_BYTE *)(v13 + 46) != 8) )
        {
          sub_F28D0(v11, v48, v15, v61, v13, v53, a7, a4, 1u, v16);
        }
      }
      if ( v62 )
        sub_C9250(v7, v62);
    }
    else
    {
      if ( !v55 || *(_BYTE *)(v7 + 103) )
        return __readfsqword(0x28u) ^ v63;
      if ( !v15 )
      {
        v52 = *(__int64 **)(v11 + 16);
        if ( !v52 )
          v52 = sub_E2050((__int64 *)v11);
        v23 = *(_DWORD *)(v13 + 40);
        v24 = v23 + *((_DWORD *)v52 + 36) + 1;
        if ( v23 > 0 )
        {
          v25 = a5;
          v56 = v7;
          v26 = 0;
          v27 = v13;
          v28 = v24;
          v29 = v25;
          do
          {
            v30 = *(_DWORD *)(v27 + 16 * (v26 + 4LL));
            v31 = (__int16)v30;
            if ( (*(_BYTE *)(*(_QWORD *)v27 + 48LL) & 0x20) != 0 && (v30 & 0x8000u) == 0 )
              v31 = sub_CF5E0(*(_QWORD *)v27, v30);
            ++v26;
            sub_E1710((__int64)v52, 50, a3 + 1 + v31, v28, 0);
          }
          while ( *(_DWORD *)(v27 + 40) > v26 );
          v7 = v56;
          v32 = v29;
          v13 = v27;
          a5 = v32;
        }
        sub_E1710((__int64)v52, 158, *(unsigned __int8 *)(v13 + 44), 0xFFFFFFFF, 0);
      }
    }
LABEL_39:
    v13 = *(_QWORD *)(v13 + 8);
  }
  while ( v13 );
  v10 = (__int64)a2[12];
LABEL_41:
  v33 = sub_C2AB0(v10 + 80, *a2, nullptr)[2];
  if ( v33 )
  {
    v34 = v33;
    do
    {
      v61 = 0;
      v62 = nullptr;
      if ( (!a5 || (unsigned int)sub_C4A40((__int64)a2, v34, a5, a6))
        && (*(_BYTE *)(v34 + 44) || (*(_BYTE *)(v7 + 50) & 8) != 0 || *(_QWORD *)(v11 + 160) || *(_BYTE *)(v11 + 32)) )
      {
        if ( (unsigned int)sub_E6250(v11, (__int64)a2, v34, &v61, (unsigned __int8 *)&v62) )
        {
          if ( !v55 || *(_BYTE *)(v7 + 103) )
            return __readfsqword(0x28u) ^ v63;
        }
        else
        {
          v42 = sub_E5750((__int64 *)v11, nullptr, 0, nullptr);
          if ( v42 )
          {
            v43 = *(__int64 **)v34;
            v42[5] = *(_QWORD *)v34;
            v42[3] = **(_QWORD **)v34;
            ++*((_DWORD *)v43 + 11);
            LODWORD(v43) = *(_DWORD *)(v11 + 52);
            *(_DWORD *)(v11 + 52) = (_DWORD)v43 + 1;
            *((_DWORD *)v42 + 18) = (_DWORD)v43;
            if ( a4 )
            {
              v50 = v42;
              sub_1348D0(v11, (__int64)v42, (__int64)a2, v61, v34, (__int64)v62, a4, 0xFFFFFFFF);
              v42 = v50;
            }
            if ( a3 )
            {
              v54 = *(_BYTE *)(v34 + (a5 != 0) + 45);
              v51 = v42;
              sub_1348D0(v11, (__int64)v42, (__int64)a2, v61, v34, (__int64)v62, a3, 1u);
              v42 = v51;
              if ( !*(_BYTE *)(v34 + 44) && (v54 & 0xFD) != 8 )
              {
                v44 = *(_QWORD *)(v11 + 160);
                if ( !v44 )
                  v44 = v11;
                *(_BYTE *)(v44 + 33) = 1;
              }
            }
            v42[3] = 0;
            sub_D8260(v7, v42);
          }
          if ( v62 )
            sub_C9250(v7, v62);
        }
      }
      v34 = *(_QWORD *)(v34 + 24);
    }
    while ( v34 );
  }
  return __readfsqword(0x28u) ^ v63;
}
