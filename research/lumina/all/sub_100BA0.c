__int64 __fastcall sub_100BA0(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r15
  _DWORD *v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // r12d
  int v7; // r14d
  __int64 v8; // rdi
  int v9; // ebp
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rdi
  unsigned int v13; // r13d
  __int64 v14; // rdi
  int v15; // eax
  unsigned __int32 v16; // eax
  signed __int32 v17; // r12d
  __int64 v18; // r12
  unsigned int v19; // r13d
  _DWORD *v20; // rcx
  _DWORD *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdi
  _DWORD *v24; // r15
  int v25; // ebp
  unsigned int v26; // edx
  _DWORD *v27; // rcx
  int v28; // eax
  _DWORD *v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // ebp
  unsigned int v33; // eax
  __int16 v34; // dx
  unsigned int v35; // r12d
  unsigned __int64 v36; // rax
  unsigned int v37; // r14d
  __int64 v38; // rsi
  unsigned int v39; // ecx
  unsigned int v40; // eax
  int v41; // edx
  __int64 v42; // rax
  unsigned int v43; // [rsp+4h] [rbp-F4h]
  int v44; // [rsp+8h] [rbp-F0h]
  _DWORD *v45; // [rsp+8h] [rbp-F0h]
  unsigned int v46; // [rsp+10h] [rbp-E8h]
  __int64 v47; // [rsp+10h] [rbp-E8h]
  __int64 v48; // [rsp+18h] [rbp-E0h]
  unsigned int v49; // [rsp+18h] [rbp-E0h]
  __int64 v50; // [rsp+20h] [rbp-D8h]
  int v51; // [rsp+28h] [rbp-D0h]
  int v52; // [rsp+28h] [rbp-D0h]
  unsigned __int32 v53; // [rsp+2Ch] [rbp-CCh]
  char *v54; // [rsp+30h] [rbp-C8h]
  unsigned int v55; // [rsp+38h] [rbp-C0h]
  unsigned int v56; // [rsp+38h] [rbp-C0h]
  __int16 v57; // [rsp+3Eh] [rbp-BAh]
  unsigned __int64 v58; // [rsp+40h] [rbp-B8h]
  unsigned int v59; // [rsp+60h] [rbp-98h]
  int v60; // [rsp+64h] [rbp-94h]
  int v61; // [rsp+6Ch] [rbp-8Ch]
  int v62; // [rsp+70h] [rbp-88h] BYREF
  int v63; // [rsp+74h] [rbp-84h] BYREF
  __int64 v64; // [rsp+78h] [rbp-80h] BYREF
  __int64 v65; // [rsp+80h] [rbp-78h] BYREF
  __int64 v66; // [rsp+88h] [rbp-70h] BYREF
  unsigned int v67[4]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-58h]
  unsigned int v69; // [rsp+A8h] [rbp-50h]
  unsigned int v70; // [rsp+ACh] [rbp-4Ch]
  unsigned __int64 v71; // [rsp+B8h] [rbp-40h]

  v2 = a1;
  v3 = a2;
  v71 = __readfsqword(0x28u);
  v4 = sub_D2AA0(a1, 0, &v64);
  v5 = v4;
  if ( !v4 )
    goto LABEL_5;
  if ( v4 == 1288 )
  {
    *(_BYTE *)(a1 + 70) = 1;
    *(_BYTE *)(a1 + 63) = 2;
    *a2 = 1;
LABEL_5:
    if ( v64 )
    {
      v7 = sub_D57A0(a1, a2);
      if ( !v7 )
        goto LABEL_7;
    }
    else
    {
      v7 = 1;
    }
    if ( !*(_BYTE *)(a1 + 70) && (*(_BYTE *)(a1 + 66) & 2) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      if ( *(_BYTE *)(v2 + 63) )
        return 264;
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v8 + 112LL))(v8, 0, 1, 6);
      if ( !v5 )
      {
        if ( !*(_BYTE *)(v2 + 63) )
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(v2 + 8) + 112LL))(
            *(_QWORD *)(v2 + 8),
            0,
            1,
            5);
        v5 = 264;
        if ( *(_BYTE *)(v2 + 70) )
        {
LABEL_35:
          sub_C9EC0(v2, 0);
          *(_BYTE *)(v2 + 70) = 0;
          goto LABEL_11;
        }
        return 264;
      }
LABEL_28:
      if ( !*(_BYTE *)(v2 + 70) )
        return v5;
      goto LABEL_29;
    }
    v9 = *(unsigned __int8 *)(a1 + 64);
    if ( *(_BYTE *)(a1 + 64) )
    {
      *(_BYTE *)(a1 + 64) = 1;
      v5 = sub_D2AA0(a1, 0, &v64);
      if ( v5 )
        goto LABEL_28;
      v7 = sub_D57A0(a1, a2);
      if ( !v7 )
        goto LABEL_33;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 8);
      if ( !*(_BYTE *)(v2 + 63) )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v10 + 112LL))(v10, 0, 1, 10);
        if ( v5 )
          goto LABEL_28;
      }
      *(_BYTE *)(v2 + 64) = 1;
      v5 = sub_D2AA0(v2, 0, &v64);
      if ( v5 )
      {
LABEL_25:
        v11 = *(_BYTE *)(v2 + 63) == 0;
        *(_BYTE *)(v2 + 64) = 0;
        v12 = *(_QWORD *)(v2 + 8);
        if ( !v11 )
          goto LABEL_8;
        goto LABEL_26;
      }
      v7 = sub_D57A0(v2, a2);
      if ( !v7 )
      {
        v11 = *(_BYTE *)(v2 + 63) == 0;
        *(_BYTE *)(v2 + 64) = 0;
        v12 = *(_QWORD *)(v2 + 8);
        if ( v11 )
        {
          v5 = v7;
LABEL_26:
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v12 + 112LL))(v12, 0, 1, 9);
          if ( !v7 )
          {
LABEL_7:
            if ( *(_DWORD *)(v2 + 72) == 3007000 )
              goto LABEL_8;
            goto LABEL_34;
          }
LABEL_8:
          if ( !*(_BYTE *)(v2 + 70) )
            return v5;
          if ( !v5 )
            goto LABEL_10;
LABEL_29:
          sub_C9EC0(v2, 0);
          *(_BYTE *)(v2 + 70) = 0;
          if ( v5 == 522 )
            v5 = -1;
          goto LABEL_11;
        }
LABEL_33:
        if ( *(_DWORD *)(v2 + 72) == 3007000 )
        {
          if ( !*(_BYTE *)(v2 + 70) )
            return v5;
LABEL_10:
          v5 = 0;
LABEL_11:
          *(_BYTE *)(v2 + 63) = 0;
          return v5;
        }
LABEL_34:
        sub_E8BB0(
          0xEu,
          "%s at line %d of [%.10s]",
          "cannot open file",
          63962,
          "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
        v5 = 14;
        if ( !*(_BYTE *)(v2 + 70) )
          return v5;
        goto LABEL_35;
      }
    }
    v13 = *(unsigned __int8 *)(v2 + 65) + 1;
    v43 = 3 - v13;
    if ( !*(_BYTE *)(v2 + 63) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(v2 + 8) + 112LL))(
             *(_QWORD *)(v2 + 8),
             v13,
             v43,
             10);
      if ( v5 )
      {
LABEL_63:
        *v3 = 1;
        if ( v9 )
          goto LABEL_8;
        goto LABEL_25;
      }
    }
    v14 = *(_QWORD *)(v2 + 16);
    *(_OWORD *)(v2 + 72) = 0;
    *(_OWORD *)(v2 + 88) = 0;
    *(_OWORD *)(v2 + 104) = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 48LL))(v14, &v65);
    if ( v5 )
    {
LABEL_61:
      if ( !*(_BYTE *)(v2 + 63) )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(v2 + 8) + 112LL))(
          *(_QWORD *)(v2 + 8),
          v13,
          v43,
          9);
      goto LABEL_63;
    }
    if ( v65 <= 32 )
      goto LABEL_44;
    v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, __int64, _QWORD))(**(_QWORD **)(v2 + 16) + 16LL))(
            *(_QWORD *)(v2 + 16),
            v67,
            32,
            0);
    if ( v15 )
      goto LABEL_70;
    v16 = _byteswap_ulong(v67[0]);
    v17 = _byteswap_ulong(v67[2]);
    if ( (v16 & 0xFFFFFFFE) == 0x377F0682
      && (v17 & (v17 - 1)) == 0
      && (unsigned int)(v17 - 512) <= 0xFE00
      && (*(_BYTE *)(v2 + 85) = v16 & 1,
          v26 = v67[3],
          *(_DWORD *)(v2 + 56) = v17,
          *(_DWORD *)(v2 + 136) = _byteswap_ulong(v26),
          *(_QWORD *)(v2 + 104) = v68,
          sub_C3700((v16 & 1) == 0, (char *)v67, 24, nullptr, (_DWORD *)(v2 + 96)),
          *(_DWORD *)(v2 + 96) == _byteswap_ulong(v69))
      && *(_DWORD *)(v2 + 100) == _byteswap_ulong(v70) )
    {
      if ( v67[1] != 417475840 )
      {
        v5 = 14;
        sub_E8BB0(
          0xEu,
          "%s at line %d of [%.10s]",
          "cannot open file",
          62799,
          "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
        goto LABEL_61;
      }
      v53 = v17 + 24;
      v50 = v17 + 24;
      if ( (unsigned int)sub_FEBD0(v50 + 0x8000, (__int64)v67)
        || (v31 = sub_D1E10(v17 + 24 + 0x8000LL, (__int64)v67), (v47 = v31) == 0) )
      {
        v15 = 7;
        goto LABEL_70;
      }
      v60 = v9;
      v44 = 0;
      v54 = (char *)(v31 + 24);
      v48 = v31 + 24 + v17;
      v32 = 0;
      v51 = 0;
      v61 = v7;
      v33 = (v65 - 32) / v50;
      HIBYTE(v34) = BYTE1(v17);
      LOBYTE(v34) = 0;
      v57 = HIWORD(v17) | v34;
      v58 = v33;
      v59 = ((unsigned __int64)(v33 + 4096) - 4063) >> 12;
      do
      {
        v35 = 1;
        v36 = (v32 << 12) + 4062LL;
        if ( v36 > v58 )
          LODWORD(v36) = v58;
        v37 = v36;
        v55 = v36;
        if ( v32 )
          v35 = (v32 << 12) - 33;
        v38 = v32;
        v39 = sub_D2AA0(v2, v32, &v66);
        if ( !v66 )
          break;
        *(_QWORD *)(*(_QWORD *)(v2 + 48) + 8LL * v32) = v48;
        v40 = v39;
        while ( v55 >= v35 )
        {
          v40 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(v2 + 16) + 16LL))(
                  *(_QWORD *)(v2 + 16),
                  v47,
                  v53,
                  v50 * (v35 - 1) + 32);
          if ( v40 )
            break;
          v40 = sub_C8010(v2, (unsigned __int32 *)&v62, &v63, v54, v47);
          if ( !v40 )
            break;
          v40 = sub_EC8D0(v2, v35, v62);
          if ( v40 )
            break;
          v41 = v63;
          if ( v63 )
          {
            *(_DWORD *)(v2 + 88) = v35;
            *(_DWORD *)(v2 + 92) = v41;
            *(_WORD *)(v2 + 86) = v57;
            v51 = *(_DWORD *)(v2 + 96);
            v44 = *(_DWORD *)(v2 + 100);
          }
          ++v35;
        }
        v56 = v40;
        *(_QWORD *)(*(_QWORD *)(v2 + 48) + 8LL * v32) = v66;
        v42 = 4LL * ((unsigned int)(v32 == 0 ? 0x88 : 0) >> 2);
        v38 = v48 + v42;
        memcpy((void *)(v42 + v66), (const void *)(v48 + v42), v32 == 0 ? -32632LL : -32768LL);
        v39 = v56;
        if ( v37 >= v35 )
          break;
        ++v32;
      }
      while ( v32 <= v59 );
      v49 = v39;
      v9 = v60;
      v7 = v61;
      sub_C91C0(v47, v38);
      if ( v49 )
      {
        v5 = v49;
        goto LABEL_61;
      }
    }
    else
    {
LABEL_44:
      v44 = 0;
      v51 = 0;
    }
    *(_DWORD *)(v2 + 96) = v51;
    *(_DWORD *)(v2 + 100) = v44;
    sub_C6BA0(v2);
    v46 = v13;
    v18 = 1;
    v52 = v9;
    v19 = 4;
    v20 = **(_DWORD ***)(v2 + 48);
    v20[24] = 0;
    v45 = v20;
    v20[32] = *(_DWORD *)(v2 + 88);
    v21 = v3;
    v22 = v2;
    v20[25] = 0;
    v11 = *(_BYTE *)(v2 + 63) == 0;
    v23 = *(_QWORD *)(v2 + 8);
    v24 = v21;
    if ( !v11 )
      goto LABEL_52;
LABEL_46:
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v23 + 112LL))(v23, v19, 1, 10);
    if ( !v15 )
    {
LABEL_52:
      while ( 1 )
      {
        v25 = v18 + 1;
        if ( (_DWORD)v18 != 1 )
          break;
        v30 = *(_DWORD *)(v22 + 88);
        if ( !v30 )
          break;
        v45[26] = v30;
        v23 = *(_QWORD *)(v22 + 8);
        if ( !*(_BYTE *)(v22 + 63) )
          goto LABEL_54;
LABEL_51:
        v18 = v25;
        v19 = v25 + 3;
        if ( !*(_BYTE *)(v22 + 63) )
          goto LABEL_46;
      }
      v45[v18 + 25] = -1;
      v23 = *(_QWORD *)(v22 + 8);
      if ( !*(_BYTE *)(v22 + 63) )
      {
LABEL_54:
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v23 + 112LL))(v23, v19, 1, 9);
        v15 = 0;
        goto LABEL_49;
      }
      v15 = 0;
      goto LABEL_49;
    }
    if ( v15 == 5 )
    {
      v25 = v18 + 1;
LABEL_49:
      if ( v25 != 5 )
      {
        v23 = *(_QWORD *)(v22 + 8);
        goto LABEL_51;
      }
      v27 = v24;
      v2 = v22;
      v5 = v15;
      v28 = *(_DWORD *)(v22 + 92);
      v9 = v52;
      v3 = v27;
      v13 = v46;
      if ( v28 )
        sub_E8BB0(0x11Bu, "recovered %d frames from WAL file %s", *(_DWORD *)(v2 + 88), *(const char **)(v2 + 128));
      goto LABEL_61;
    }
    v29 = v24;
    v9 = v52;
    v2 = v22;
    v13 = v46;
    v3 = v29;
LABEL_70:
    v5 = v15;
    goto LABEL_61;
  }
  return v5;
}
