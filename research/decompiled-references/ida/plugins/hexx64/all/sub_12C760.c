unsigned __int64 __fastcall sub_12C760(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __m128i a5)
{
  unsigned __int64 *v5; // r14
  int v6; // r13d
  bool v7; // zf
  int v8; // r12d
  __int64 v9; // rbx
  bool v10; // sf
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // dl
  unsigned __int8 v15; // al
  char v16; // al
  __int16 v17; // dx
  __int16 v18; // ax
  int v19; // edx
  int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int8 *v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _DWORD *v30; // rax
  __int64 v31; // [rsp+10h] [rbp-70h]
  unsigned __int8 v32; // [rsp+10h] [rbp-70h]
  unsigned __int64 *v33; // [rsp+18h] [rbp-68h]
  __int64 v34; // [rsp+18h] [rbp-68h]
  unsigned __int64 v35; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+30h] [rbp-50h] BYREF
  __int64 v37; // [rsp+38h] [rbp-48h]
  unsigned __int64 v38; // [rsp+48h] [rbp-38h]

  v5 = a2;
  v6 = -(int)a4;
  v31 = a3;
  if ( (int)a4 > 0 )
    v6 = a4;
  v7 = *(_BYTE *)a1 == 4;
  v38 = __readfsqword(0x28u);
  v8 = a4;
  if ( !v7 )
    goto LABEL_4;
  a3 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)(*(_DWORD *)a3 - 12) > 1 )
    goto LABEL_4;
  if ( *(_BYTE *)(a3 + 48) == 2 )
  {
    v24 = (unsigned __int8 *)(a3 + 32);
    v34 = a3 + 48;
  }
  else
  {
    if ( *(_BYTE *)(a3 + 32) != 2 )
      goto LABEL_4;
    v24 = (unsigned __int8 *)(a3 + 48);
    v34 = a3 + 32;
  }
  a2 = &v35;
  v25 = sub_11FD80((char *)v34, (__int64 *)&v35, 0);
  a4 = v25;
  if ( (_BYTE)v25 )
  {
    if ( *(_BYTE *)a1 == 4 && (v30 = *(_DWORD **)(a1 + 8), *v30 == 13) )
    {
      a3 = (unsigned int)v8;
      if ( (_DWORD *)v34 == v30 + 12 )
        a3 = (unsigned int)-v8;
      else
        a4 = 0;
    }
    else
    {
      a3 = (unsigned int)v8;
      a4 = 0;
    }
    if ( (int)a3 <= 0 )
    {
      if ( v35 >= v6 )
        goto LABEL_22;
    }
    else if ( !__CFADD__(v6, v35) )
    {
LABEL_22:
      v32 = a4;
      v26 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v34 + 8) + 16LL) + (int)a3, *(_DWORD *)(v34 + 4), 0);
      if ( v26 || v32 )
      {
        *(__m128i *)(*(_QWORD *)(v34 + 8) + 16LL) = _mm_unpacklo_epi64(
                                                      (__m128i)(unsigned __int64)v26,
                                                      (__m128i)(unsigned __int64)v26);
      }
      else
      {
        sub_123A40((__int64)&v36, v24, v27, v32);
        sub_11CDA0(a1);
        sub_123A40(a1, (unsigned __int8 *)&v36, v28, v29);
        sub_11CDA0((__int64)&v36);
      }
      return v38 - __readfsqword(0x28u);
    }
  }
LABEL_4:
  v37 = 0;
  v36 = 0xFFFFFFFF00000000LL;
  v9 = j__qalloc_or_throw(80, (__int64)a2, a3, a4);
  v33 = (unsigned __int64 *)(v9 + 32);
  *(_QWORD *)(v9 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v9 + 56) = 0;
  *(_QWORD *)(v9 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v9 + 72) = 0;
  sub_330970(v9, v31);
  v7 = v8 == 0;
  v10 = v8 < 0;
  v11 = v9 + 32;
  LOBYTE(v36) = 4;
  v37 = v9;
  *(_DWORD *)v9 = (v10 || v7) + 12;
  if ( a1 != v9 + 32 )
  {
    sub_11CDA0(v11);
    sub_123A40(v11, (unsigned __int8 *)a1, v12, v13);
  }
  sub_120A10(v9 + 48, v5, v6, *(_DWORD *)(a1 + 4), -1, 0);
  HIDWORD(v36) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(v9 + 68) = HIDWORD(v36);
  sub_15BC70((unsigned int *)v9, v5, 0, 0, nullptr, nullptr, a5, 0);
  if ( *(_DWORD *)v9 == 4 || *(_DWORD *)v9 == 67 && *(_DWORD *)(v9 + 36) == *(_DWORD *)(v9 + 68) )
  {
    v14 = *(_BYTE *)(v9 + 32);
  }
  else
  {
    v14 = 4;
    v33 = &v36;
  }
  v15 = *(_BYTE *)a1;
  *(_BYTE *)a1 = v14;
  *(_BYTE *)v33 = v15;
  v16 = *(_BYTE *)(a1 + 1);
  *(_BYTE *)(a1 + 1) = *((_BYTE *)v33 + 1);
  v17 = *((_WORD *)v33 + 1);
  *((_BYTE *)v33 + 1) = v16;
  v18 = *(_WORD *)(a1 + 2);
  *(_WORD *)(a1 + 2) = v17;
  v19 = *((_DWORD *)v33 + 1);
  *((_WORD *)v33 + 1) = v18;
  v20 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v19;
  v21 = v33[1];
  *((_DWORD *)v33 + 1) = v20;
  v22 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v21;
  v33[1] = v22;
  sub_11CDA0((__int64)&v36);
  return v38 - __readfsqword(0x28u);
}

