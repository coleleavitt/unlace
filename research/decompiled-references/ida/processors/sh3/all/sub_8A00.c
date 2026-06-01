unsigned __int64 __fastcall sub_8A00(_QWORD *a1, char a2)
{
  char *v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v8; // [rsp+0h] [rbp-178h] BYREF
  __int64 v9; // [rsp+10h] [rbp-168h]
  __int64 v10; // [rsp+18h] [rbp-160h]
  __int64 v11; // [rsp+20h] [rbp-158h]
  char v12; // [rsp+28h] [rbp-150h] BYREF
  _QWORD v13[2]; // [rsp+168h] [rbp-10h] BYREF

  v13[0] = __readfsqword(0x28u);
  v2 = &v12;
  v8 = -1;
  v9 = -1;
  v10 = 0;
  v11 = 0;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 40;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *((_QWORD *)v2 - 2) = 0;
  }
  while ( v13 != (_QWORD *)v2 );
  if ( a2
    && (unsigned int)((__int64 (__fastcall *)(__int128 *, _QWORD, _QWORD *, double))decode_insn)(&v8, *a1, v13, 0.0)
    && (unsigned __int8)has_insn_feature((unsigned __int16)v10, 0x8000, v4, v5, v6, v7, v8, *((_QWORD *)&v8 + 1), v9) )
  {
    *a1 += WORD1(v10);
  }
  return v13[0] - __readfsqword(0x28u);
}

