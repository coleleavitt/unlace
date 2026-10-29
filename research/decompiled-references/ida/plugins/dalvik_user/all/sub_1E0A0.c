__int64 __fastcall sub_1E0A0(__int64 a1, const char *a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  _BYTE v4[5]; // [rsp+3h] [rbp-35h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-30h]

  v5 = __readfsqword(0x28u);
  v2 = strlen(a2);
  qsnprintf();
  result = sub_1DFC0(a1, (__int64)v4, 4u);
  if ( (_BYTE)result )
    return sub_1DFC0(a1, (__int64)a2, v2);
  return result;
}

