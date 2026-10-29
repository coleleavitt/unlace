__int64 __fastcall sub_11D360(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, double a5)
{
  _BYTE *v5; // rbp
  unsigned __int64 v6; // rbx
  _BYTE *v7; // rax
  _BYTE *v8; // rdx
  char v9; // cl
  __int64 ph; // rax
  __int32 v11; // edx
  unsigned __int64 v12; // rax
  int v13; // edx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __m128i *v17; // rax
  __m128i v18; // [rsp+0h] [rbp-68h] BYREF
  __int32 v19; // [rsp+10h] [rbp-58h]
  _BYTE v20[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v5 = a3;
  v21 = __readfsqword(0x28u);
  LODWORD(v6) = a4;
  if ( a4 < 0 )
  {
    v6 = -a4;
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
    {
      if ( v6 > 0x10 )
      {
        if ( !under_debugger )
          sub_383060(0xCB9Eu, a5);
        BUG();
      }
      v7 = &a3[-a4];
      v8 = v20;
      do
      {
        v9 = *--v7;
        *v8++ = v9;
      }
      while ( v5 != v7 );
      v5 = v20;
    }
  }
  ph = get_ph();
  v11 = v6;
  v12 = *(_QWORD *)(ph + 120);
  if ( v12 )
  {
    v11 = v12;
    if ( v12 >= (int)v6 )
      v11 = v6;
  }
  v19 = v11;
  v13 = cpu2ieee();
  result = 0;
  if ( v13 == 1 )
  {
    sub_11CDA0(a1);
    *(_BYTE *)a1 = 13;
    v17 = (__m128i *)j__qalloc_or_throw(20, (__int64)v5, v15, v16);
    *v17 = _mm_load_si128(&v18);
    v17[1].m128i_i32[0] = v19;
    *(_QWORD *)(a1 + 8) = v17;
    result = 1;
    *(_DWORD *)(a1 + 4) = v6;
  }
  return result;
}

