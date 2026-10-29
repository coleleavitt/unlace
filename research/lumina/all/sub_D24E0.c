__int64 __fastcall sub_D24E0(__int64 *a1, __int64 a2, __int64 *a3)
{
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // rdi
  unsigned int v8; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v9[5]; // [rsp+10h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  if ( !qword_241610 || (v5 = qword_241610(202), result = 3338, !v5) )
  {
    result = sub_D2440(*a1, 0, a3, 0x101Eu, (__int64)&v8);
    v8 = result;
    if ( !(_DWORD)result )
    {
      v7 = *a3;
      v9[0] = 2147418112;
      if ( *(_QWORD *)v7 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v7 + 80LL))(v7, 18, v9);
      if ( a2 > 0 )
        sub_C4140((__int64)a1, (__int64 *)*a3, a2);
      return v8;
    }
  }
  return result;
}
