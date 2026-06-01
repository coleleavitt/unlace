__int64 __fastcall sub_3FFD0(__int64 a1, unsigned __int16 a2, int a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned int v7; // [rsp+Ch] [rbp-14h] BYREF
  unsigned __int64 v8; // [rsp+10h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 8);
  v8 = __readfsqword(0x28u);
  result = sub_3FE20(v4, a2, a3, &v7, nullptr, 0, nullptr, nullptr, nullptr);
  if ( a4 )
    *a4 = v7;
  return result;
}

