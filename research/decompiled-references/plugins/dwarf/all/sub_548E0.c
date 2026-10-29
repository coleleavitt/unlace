unsigned __int64 __fastcall sub_548E0(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rbp
  size_t v5; // r13
  __int64 v6; // r12
  size_t v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v11 = 0;
  src = nullptr;
  if ( !(unsigned __int8)tinfo_t__build_anon_type_name(&src, a1 + 384) )
  {
    if ( !under_debugger )
      interr(30440);
    BUG();
  }
  v3 = v11;
  if ( (_QWORD)v11 )
  {
    v5 = v11 - 1;
    if ( (_QWORD)v11 != 1 )
    {
      v6 = a2[1];
      v7 = v11 - 1;
      if ( v6 )
      {
        --v6;
        v7 = v5 + v6;
        v3 = v11 + v6;
      }
      v8 = *a2;
      if ( a2[2] < v3 )
      {
        v9 = qvector_reserve(a2, v8, v3, 1);
        *a2 = v9;
        v8 = v9;
      }
      a2[1] = v3;
      *(_BYTE *)(v8 + v7) = 0;
      memcpy((void *)(v6 + *a2), src, v5);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v11 = 0;
    qfree(src);
  }
  return v12 - __readfsqword(0x28u);
}
