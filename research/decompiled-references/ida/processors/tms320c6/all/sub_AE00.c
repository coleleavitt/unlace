unsigned __int64 __fastcall sub_AE00(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 *v4; // rax
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  int v9; // edx
  int v10; // esi
  __int64 v11; // rcx
  char v13; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+168h] [rbp-30h] BYREF

  v14 = __readfsqword(0x28u);
  v4 = (unsigned __int64 *)&v13;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( &v14 != v4 );
  v5 = 14;
  do
  {
    if ( decode_prev_insn() == -1 )
      break;
    --v5;
  }
  while ( v5 );
  v8 = 1;
  v9 = 0;
  v10 = 0;
  do
  {
    v10 *= 2;
    v11 = v10 | 1u;
    if ( (a3 & v8) != 0 )
      v10 |= 1u;
    ++v9;
    v8 *= 2;
  }
  while ( v9 != 6 );
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64, double, __int64, __int64, __int64))(*(_QWORD *)a1 + 112LL))(
    a1,
    v10,
    10,
    v11,
    v6,
    v7,
    0.0,
    -1,
    -1,
    -1);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 112LL))(a1, 0, 10);
  return v14 - __readfsqword(0x28u);
}

