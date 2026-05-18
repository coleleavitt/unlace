__int64 __fastcall sub_E8D70(signed int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int64 v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v6 = 0;
  v7[1] = __readfsqword(0x28u);
  v7[0] = 0;
  result = sub_E8C70(a1, &v6, v7, a4);
  if ( !(_DWORD)result )
  {
    *a2 = v6;
    *a3 = v7[0];
  }
  return result;
}
