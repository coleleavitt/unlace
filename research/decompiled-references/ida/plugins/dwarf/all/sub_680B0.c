__int64 __fastcall sub_680B0(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 result; // rax
  char v5; // dl
  int v6; // [rsp+4h] [rbp-34h] BYREF
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h] BYREF
  char v9; // [rsp+18h] [rbp-20h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v1 = *(__int64 **)(a1 + 32);
  v10 = __readfsqword(0x28u);
  v9 = 0;
  v8 = 0;
  v7 = 0;
  v2 = *v1;
  v3 = v1[32];
  v6 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, int *, __int64 *))(v3 + 112))(
         *(_QWORD *)(v2 + 24),
         59,
         &v6,
         &v7) )
  {
    return 0;
  }
  if ( !v6 )
    return 0;
  v5 = sub_96EC0(*(_QWORD *)(a1 + 32), &v8, 59);
  result = (unsigned int)v8;
  if ( !v5 )
    return 0;
  return result;
}

