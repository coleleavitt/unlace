unsigned __int64 __fastcall sub_3F1CC0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  unsigned int dtype_size; // ebx
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars8; // [rsp+8h] [rbp+8h]

  vars8 = __readfsqword(0x28u);
  dtype_size = get_dtype_size();
  sub_32C430(&vars0, a2, dtype_size, a5);
  sub_32F0D0(a1, a3, dtype_size);
  clear_tinfo_t();
  return vars8 - __readfsqword(0x28u);
}

