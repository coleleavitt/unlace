__int64 __fastcall sub_3F3D80(__int64 a1, __int64 a2, _BYTE *a3, __m128i a4)
{
  __int64 v4; // rax
  _BYTE *v5; // r15
  unsigned int v6; // ebx
  int v7; // eax
  int v9; // eax
  _DWORD *v10; // rdi
  int v11; // eax
  int v12; // r12d
  int v13; // edx
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  _DWORD *v19; // rsi
  unsigned __int8 v20; // al
  __int64 v21; // r12
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  char *v25; // rax
  __int64 v26; // rsi
  char *v27; // r12
  char *v28; // [rsp+0h] [rbp-C8h]
  char v29; // [rsp+17h] [rbp-B1h] BYREF
  __int64 v30; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+20h] [rbp-A8h] BYREF
  int v32; // [rsp+28h] [rbp-A0h]
  _QWORD v33[5]; // [rsp+30h] [rbp-98h] BYREF
  char v34; // [rsp+58h] [rbp-70h]
  __int64 v35; // [rsp+60h] [rbp-68h]
  unsigned int v36; // [rsp+68h] [rbp-60h]
  _DWORD v37[3]; // [rsp+7Ch] [rbp-4Ch] BYREF
  unsigned __int64 v38; // [rsp+88h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  v38 = __readfsqword(0x28u);
  v5 = a3;
  v34 = 0;
  memset(&v33[1], 0, 32);
  v33[0] = &off_4E9978;
  v35 = v4;
  v36 = 0;
  sub_11E900(a3, (__int64)v33);
  v6 = v36;
  if ( v36 )
    return v6;
  v7 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 == 42 )
  {
    if ( v5[32] != 4 )
      goto LABEL_4;
    v5 = *((_BYTE **)v5 + 5);
    v7 = *(_DWORD *)v5;
  }
  if ( v7 == 6 && v5[32] == 4 )
    v5 = *((_BYTE **)v5 + 5);
LABEL_4:
  if ( !(unsigned __int8)sub_11FD80(v5 + 48, &v30, 0) )
    return v6;
  v9 = *(_DWORD *)v5;
  if ( v30 )
  {
    if ( (unsigned int)(v9 - 43) <= 1 && (v30 == 1 || v30 == 64) )
    {
      v18 = v5[32] == 4;
      v29 = 0;
      if ( v18 )
      {
        v19 = *((_DWORD **)v5 + 5);
        if ( *v19 == 20 )
        {
          if ( v19 )
          {
            v20 = sub_3F3B10(*(_QWORD *)(a1 + 8), (__int64)v19, &v29);
            if ( (v20 & 0xBA) == 0 && v20 == (v30 | 4) && v29 )
            {
              v21 = *((_QWORD *)v5 + 5);
              v22 = *(_QWORD *)(a1 + 8);
              if ( v30 == 1 )
                v23 = *(_DWORD *)(v22 + 688);
              else
                v23 = *(_DWORD *)(v22 + 696);
              v32 = v23;
              v31 = 0x100000001LL;
              sub_125180((unsigned __int8 *)(v21 + 32), (unsigned __int8 *)&v31);
              sub_11CDA0((__int64)&v31);
              v24 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 692LL);
              v31 = 0x100000001LL;
              v32 = v24;
              sub_125180((unsigned __int8 *)(v21 + 48), (unsigned __int8 *)&v31);
              sub_11CDA0((__int64)&v31);
              sub_1207E0(
                (char *)(v21 + 48),
                *(unsigned __int64 **)(a1 + 8),
                6,
                *(_QWORD *)(v21 + 24),
                *(_DWORD *)(v21 + 52),
                a4);
              *(_OWORD *)(*((_QWORD *)v5 + 7) + 16LL) = 0;
              return 1;
            }
          }
        }
      }
    }
  }
  else
  {
    if ( v9 == 31 )
    {
      if ( (v5[4] & 0x10) != 0 )
        return v6;
      goto LABEL_10;
    }
    if ( (unsigned int)(v9 - 43) <= 1 || (unsigned int)(v9 - 32) <= 1 )
    {
LABEL_10:
      v10 = *(_DWORD **)(a1 + 8);
      v37[0] = 0;
      v11 = sub_3F3BB0(v10, (__int64)(v5 + 32), v37);
      v12 = v11;
      if ( !v11 )
        return 0;
      v13 = v37[0];
      if ( v11 == 1 )
      {
        v32 = v37[0];
        v31 = 0x100000001LL;
        sub_125180(v5 + 32, (unsigned __int8 *)&v31);
        sub_11CDA0((__int64)&v31);
      }
      else
      {
        v14 = *((_QWORD *)v5 + 5);
        v15 = 19;
        if ( *(_DWORD *)v14 == 31 )
        {
          if ( v12 == 3 )
            return v6;
          v15 = 21;
        }
        *(_DWORD *)v14 = v15;
        v31 = 0x100000001LL;
        v32 = v13;
        sub_125180((unsigned __int8 *)(v14 + 32), (unsigned __int8 *)&v31);
        sub_11CDA0((__int64)&v31);
        v31 = 0x100000001LL;
        v32 = v37[1];
        sub_125180((unsigned __int8 *)(v14 + 48), (unsigned __int8 *)&v31);
        sub_11CDA0((__int64)&v31);
        if ( v12 == 3 )
        {
          v25 = (char *)j__qalloc_or_throw(80, (__int64)&v31, v16, v17);
          v26 = *(_QWORD *)(v14 + 24);
          v27 = v25;
          v28 = v25 + 32;
          *((_QWORD *)v25 + 4) = 0xFFFFFFFF00000000LL;
          *((_QWORD *)v25 + 5) = 0;
          *((_QWORD *)v25 + 6) = 0xFFFFFFFF00000000LL;
          *((_QWORD *)v25 + 7) = 0;
          *((_QWORD *)v25 + 8) = 0xFFFFFFFF00000000LL;
          *((_QWORD *)v25 + 9) = 0;
          sub_330970((__int64)v25, v26);
          *(_DWORD *)v27 = 19;
          sub_11CA10(v28, (char *)(v14 + 32));
          sub_11CA10(v27 + 48, (char *)(v14 + 48));
          *((_DWORD *)v27 + 17) = 1;
          *(_DWORD *)(v14 + 36) = 1;
          *(_BYTE *)(v14 + 32) = 4;
          *(_QWORD *)(v14 + 40) = v27;
          v31 = 0x100000001LL;
          v32 = v37[2];
          sub_125180((unsigned __int8 *)(v14 + 48), (unsigned __int8 *)&v31);
          sub_11CDA0((__int64)&v31);
        }
      }
      if ( *(_DWORD *)v5 == 31 )
        *(_DWORD *)v5 = 33;
      return 1;
    }
  }
  return v6;
}

