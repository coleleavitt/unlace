_QWORD *__fastcall sub_336150(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  int v10; // r8d
  bool v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // r12
  __int64 v16; // r15
  __int64 tinfo_size; // rax
  __int64 v18; // [rsp-10h] [rbp-70h]
  __int64 v19; // [rsp-8h] [rbp-68h]
  int v20; // [rsp+4h] [rbp-5Ch]
  int v21; // [rsp+8h] [rbp-58h]
  __int64 v22; // [rsp+18h] [rbp-48h]
  _QWORD v23[8]; // [rsp+20h] [rbp-40h] BYREF

  v22 = a5;
  v10 = 0;
  v23[1] = __readfsqword(0x28u);
  if ( a5 )
  {
    v10 = *(_DWORD *)(a5 + 8);
    v22 = *(_QWORD *)a5;
  }
  v12 = a6 != 0;
  if ( a4 )
  {
    if ( a6 )
    {
      v16 = *(int *)(a6 + 4);
      v20 = v10;
      tinfo_size = get_tinfo_size();
      v10 = v20;
      if ( v16 != tinfo_size )
        return nullptr;
    }
    v21 = v10;
    v23[0] = 0;
    copy_tinfo_t();
    v10 = v21;
  }
  else
  {
    v23[0] = 0;
  }
  v13 = sub_335B10(a1, a2, a3, (__int64)v23, v10, v22, a7, a8, v12);
  v14 = (_QWORD *)v13;
  if ( v13 && a6 )
    v14 = sub_125260(v13, (unsigned __int8 *)a6, v18, v19);
  clear_tinfo_t();
  return v14;
}

