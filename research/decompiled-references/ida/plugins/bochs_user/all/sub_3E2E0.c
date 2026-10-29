__int64 __fastcall sub_3E2E0(__int64 a1, __int64 a2, unsigned __int64 a3, _WORD *a4)
{
  __int64 v4; // rdi
  int v6; // edx
  __int64 result; // rax
  char *v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v8[1] = (char *)__readfsqword(0x28u);
  v8[0] = nullptr;
  v6 = sub_3E090(v4, a3, nullptr, v8, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
  result = 0;
  if ( !v6 )
  {
    *a4 = sub_3E290(v8[0]);
    return 1;
  }
  return result;
}

