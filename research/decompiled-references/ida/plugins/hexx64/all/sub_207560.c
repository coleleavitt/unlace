__int64 __fastcall sub_207560(__int64 a1, unsigned int a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  unsigned __int8 v10; // [rsp+Fh] [rbp-39h]
  __m128i v11; // [rsp+10h] [rbp-38h] BYREF
  int v12; // [rsp+20h] [rbp-28h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 8);
  v13 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 432);
  v6 = v5 + 104LL * (int)a2;
  if ( (*(_BYTE *)(v6 + 27) & 2) == 0 )
    return 0;
  if ( !*(_DWORD *)(v6 + 92) )
    return 0;
  v8 = v5 + 104LL * *(int *)(*(_QWORD *)(a1 + 72) + 44LL);
  v9 = sub_1C3DC0((int *)v6, *(_DWORD *)(v6 + 88), v8, *(_DWORD *)(v8 + 88), &v11);
  if ( !v9 )
    return 0;
  v10 = v9;
  sub_207330(a1, (_QWORD *)a2, v12, a3);
  return v10;
}

