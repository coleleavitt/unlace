__int64 __fastcall sub_31690(const double *a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  _QWORD *func; // rax
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h] BYREF
  __m128 v9; // [rsp+18h] [rbp-30h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  unsigned __int64 v11; // [rsp+38h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v2 == (char *)sub_30B70 )
  {
    LOBYTE(v8) = 1;
    v10 = 0;
    v7 = -1;
    v9 = _mm_loadh_ps(a1 + 4);
    v3 = sub_135E0(a1, a2);
    sub_2CA10((_QWORD *)(v3 + 1040), &v7, &v8);
    v4 = v7;
  }
  else
  {
    v4 = v2();
  }
  if ( v4 == -1 )
    return -1;
  func = (_QWORD *)get_func();
  if ( !func )
    return -1;
  else
    return func[1] - *func;
}

