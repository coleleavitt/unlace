__int64 __fastcall sub_4A40(__int64 a1)
{
  char *v1; // rax
  int v2; // edx
  __int64 result; // rax
  __int128 v4; // [rsp+0h] [rbp-178h] BYREF
  __int64 v5; // [rsp+10h] [rbp-168h]
  __int64 v6; // [rsp+18h] [rbp-160h]
  __int64 v7; // [rsp+20h] [rbp-158h]
  char v8; // [rsp+28h] [rbp-150h] BYREF
  _QWORD v9[2]; // [rsp+168h] [rbp-10h] BYREF

  v9[0] = __readfsqword(0x28u);
  v1 = &v8;
  v4 = -1;
  v5 = -1;
  v6 = 0;
  v7 = 0;
  do
  {
    *(_WORD *)v1 = 0;
    v1 += 40;
    *((_WORD *)v1 - 19) = 0;
    *((_WORD *)v1 - 18) = 0;
    *((_DWORD *)v1 - 2) = 0;
    *((_WORD *)v1 - 17) = 0;
    *((_OWORD *)v1 - 2) = 0;
    *((_QWORD *)v1 - 2) = 0;
  }
  while ( v9 != (_QWORD *)v1 );
  v2 = ((__int64 (__fastcall *)(__int128 *, __int64, _QWORD *, double))decode_insn)(&v4, a1, v9, 0.0);
  result = 0;
  if ( v2 > 0 && (_WORD)v6 == 177 )
    return WORD1(v6);
  return result;
}

