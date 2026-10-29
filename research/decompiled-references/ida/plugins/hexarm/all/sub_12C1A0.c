unsigned __int64 __fastcall sub_12C1A0(__int64 a1, int a2, __int64 a3, int a4)
{
  int v4; // r13d
  bool v5; // zf
  __int64 v7; // rbx
  bool v8; // sf
  __int64 v9; // r12
  char v10; // dl
  unsigned __int8 v11; // al
  char v12; // al
  __int16 v13; // dx
  __int16 v14; // ax
  int v15; // edx
  int v16; // eax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v20; // rdx
  unsigned __int8 *v21; // rbx
  char v22; // al
  char v23; // cl
  int v24; // edx
  __int64 v25; // rax
  _DWORD *v26; // rax
  char v28; // [rsp+10h] [rbp-70h]
  unsigned __int64 *v29; // [rsp+18h] [rbp-68h]
  __int64 v30; // [rsp+18h] [rbp-68h]
  unsigned __int64 v31; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-50h] BYREF
  __int64 v33; // [rsp+38h] [rbp-48h]
  unsigned __int64 v34; // [rsp+48h] [rbp-38h]

  v4 = -a4;
  if ( a4 > 0 )
    v4 = a4;
  v5 = *(_BYTE *)a1 == 4;
  v34 = __readfsqword(0x28u);
  if ( !v5 )
    goto LABEL_4;
  v20 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)(*(_DWORD *)v20 - 12) > 1 )
    goto LABEL_4;
  if ( *(_BYTE *)(v20 + 48) == 2 )
  {
    v21 = (unsigned __int8 *)(v20 + 32);
    v30 = v20 + 48;
    v22 = sub_11F7C0((char *)(v20 + 48), &v31, 0);
  }
  else
  {
    if ( *(_BYTE *)(v20 + 32) != 2 )
      goto LABEL_4;
    v21 = (unsigned __int8 *)(v20 + 48);
    v30 = v20 + 32;
    v22 = sub_11F7C0((char *)(v20 + 32), &v31, 0);
  }
  v23 = v22;
  if ( v22 )
  {
    if ( *(_BYTE *)a1 == 4 && (v26 = *(_DWORD **)(a1 + 8), *v26 == 13) )
    {
      v24 = a4;
      if ( (_DWORD *)v30 == v26 + 12 )
        v24 = -a4;
      else
        v23 = 0;
    }
    else
    {
      v24 = a4;
      v23 = 0;
    }
    if ( v24 <= 0 )
    {
      if ( v31 >= v4 )
        goto LABEL_22;
    }
    else if ( !__CFADD__(v4, v31) )
    {
LABEL_22:
      v28 = v23;
      v25 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v30 + 8) + 16LL) + v24, *(unsigned int *)(v30 + 4), 0);
      if ( v25 || v28 )
      {
        *(__m128i *)(*(_QWORD *)(v30 + 8) + 16LL) = _mm_unpacklo_epi64(
                                                      (__m128i)(unsigned __int64)v25,
                                                      (__m128i)(unsigned __int64)v25);
      }
      else
      {
        sub_123480((__int64)&v32, v21);
        sub_11C7E0(a1);
        sub_123480(a1, (unsigned __int8 *)&v32);
        sub_11C7E0((__int64)&v32);
      }
      return v34 - __readfsqword(0x28u);
    }
  }
LABEL_4:
  v33 = 0;
  v32 = 0xFFFFFFFF00000000LL;
  v7 = j__qalloc_or_throw();
  v29 = (unsigned __int64 *)(v7 + 32);
  *(_QWORD *)(v7 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 72) = 0;
  sub_330C90(v7, a3);
  v5 = a4 == 0;
  v8 = a4 < 0;
  v9 = v7 + 32;
  LOBYTE(v32) = 4;
  v33 = v7;
  *(_DWORD *)v7 = (v8 || v5) + 12;
  if ( a1 != v7 + 32 )
  {
    sub_11C7E0(v9);
    sub_123480(v9, (unsigned __int8 *)a1);
  }
  sub_120450(v7 + 48, a2, v4, *(_DWORD *)(a1 + 4), -1, 0);
  HIDWORD(v32) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(v7 + 68) = HIDWORD(v32);
  sub_15B6B0(v7, a2, 0, 0, 0, 0, 0);
  if ( *(_DWORD *)v7 == 4 || *(_DWORD *)v7 == 67 && *(_DWORD *)(v7 + 36) == *(_DWORD *)(v7 + 68) )
  {
    v10 = *(_BYTE *)(v7 + 32);
  }
  else
  {
    v10 = 4;
    v29 = &v32;
  }
  v11 = *(_BYTE *)a1;
  *(_BYTE *)a1 = v10;
  *(_BYTE *)v29 = v11;
  v12 = *(_BYTE *)(a1 + 1);
  *(_BYTE *)(a1 + 1) = *((_BYTE *)v29 + 1);
  v13 = *((_WORD *)v29 + 1);
  *((_BYTE *)v29 + 1) = v12;
  v14 = *(_WORD *)(a1 + 2);
  *(_WORD *)(a1 + 2) = v13;
  v15 = *((_DWORD *)v29 + 1);
  *((_WORD *)v29 + 1) = v14;
  v16 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v15;
  v17 = v29[1];
  *((_DWORD *)v29 + 1) = v16;
  v18 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v17;
  v29[1] = v18;
  sub_11C7E0((__int64)&v32);
  return v34 - __readfsqword(0x28u);
}

