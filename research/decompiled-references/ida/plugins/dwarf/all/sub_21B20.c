__int64 __fastcall sub_21B20(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__m128i *, __int64, __int64, __int64),
        __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // r15
  const char *v8; // rdi
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 *v14; // rdx
  __int64 v15; // rdi
  int v16; // [rsp+4h] [rbp-6Ch]
  unsigned int v17; // [rsp+4h] [rbp-6Ch]
  _UNKNOWN **v18; // [rsp+8h] [rbp-68h] BYREF
  __int64 v19; // [rsp+10h] [rbp-60h]
  __int128 v20; // [rsp+18h] [rbp-58h]
  unsigned __int64 v21; // [rsp+30h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v18 = &off_C73E0;
  v19 = 0;
  v20 = 0;
  enumerate_files(0, 0, a1, "*", &v18);
  v6 = v20;
  v7 = 0;
  if ( (_QWORD)v20 )
  {
    while ( 1 )
    {
      v8 = src;
      v9 = v19 + 24 * v7;
      if ( *(_QWORD *)(v9 + 8) )
        v8 = *(const char **)v9;
      result = sub_21580((__int64)v8, a2, a3, a4);
      if ( (_DWORD)result != -1 )
        break;
      if ( v6 == ++v7 )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    result = 0xFFFFFFFFLL;
  }
  v11 = v19;
  v18 = &off_C73E0;
  if ( v19 )
  {
    v12 = v20;
    if ( (_QWORD)v20 )
    {
      v13 = 0;
      do
      {
        v14 = (__int64 *)(v11 + 24 * v13);
        v15 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          v16 = result;
          qfree(v15);
          v11 = v19;
          LODWORD(result) = v16;
        }
        ++v13;
      }
      while ( v12 != v13 );
    }
    v17 = result;
    *(_QWORD *)&v20 = 0;
    qfree(v11);
    return v17;
  }
  return result;
}

