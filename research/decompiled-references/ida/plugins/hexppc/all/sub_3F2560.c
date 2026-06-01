unsigned __int64 __fastcall sub_3F2560(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rax
  int dtype_size; // edx
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  int vars8; // [rsp+8h] [rbp+8h]
  __int64 vars10; // [rsp+10h] [rbp+10h] BYREF
  int vars18; // [rsp+18h] [rbp+18h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  vars28 = __readfsqword(0x28u);
  vars0 = 0x400000001LL;
  vars10 = 0x400000001LL;
  vars8 = a5;
  vars18 = a4;
  if ( (unsigned int)(a2 - 63) > 1 && a2 != 67 )
  {
    dtype_size = get_dtype_size();
    goto LABEL_7;
  }
  v5 = get_dtype_size();
  dtype_size = v5;
  if ( a2 == 67 )
  {
    HIDWORD(vars0) = 4 * (v5 == 4) + 4;
LABEL_7:
    HIDWORD(vars10) = dtype_size;
    goto LABEL_5;
  }
  HIDWORD(vars0) = v5;
LABEL_5:
  sub_1D2850(a1, a2, (unsigned __int8 *)&vars0, nullptr, (unsigned __int8 *)&vars10);
  sub_119360((__int64)&vars10);
  sub_119360((__int64)&vars0);
  return vars28 - __readfsqword(0x28u);
}

