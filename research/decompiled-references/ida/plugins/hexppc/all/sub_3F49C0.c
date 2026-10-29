__int64 __fastcall sub_3F49C0(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, __int64 a5)
{
  int v5; // eax
  __int64 result; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v11; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_DWORD *)a5;
  v12[1] = __readfsqword(0x28u);
  if ( (unsigned int)(v5 - 12) > 1 || *(_BYTE *)(a5 + 32) != 4 )
    return sub_334EC0(a2, a1, a3, a4, (int *)a5);
  v8 = *(_QWORD *)(a5 + 40);
  v11 = 0;
  v12[0] = 0;
  if ( !(unsigned __int8)sub_3F49C0(a1, &v11, a3, a4, v8) )
    return 0;
  result = sub_334E70(v12, a5 + 48, (__int64)a3);
  if ( !(_BYTE)result )
    return 0;
  v9 = v12[0];
  if ( *(_DWORD *)a5 == 13 )
    v9 = -v12[0];
  *a2 = v11 + v9;
  return result;
}

