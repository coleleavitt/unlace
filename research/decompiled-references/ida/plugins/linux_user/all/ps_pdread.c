__int64 __fastcall ps_pdread(unsigned int *a1, __off64_t a2, unsigned __int64 *a3, int a4)
{
  unsigned int v6; // eax
  __int64 v8; // r14
  unsigned int v9; // esi
  __int64 (__fastcall **v11)(_QWORD, __int64); // [rsp+0h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-40h]
  __int64 v13; // [rsp+10h] [rbp-38h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v6 = *a1;
  v14 = __readfsqword(0x28u);
  v13 = 0;
  v11 = (__int64 (__fastcall **)(_QWORD, __int64))&off_44D48;
  v12 = v6;
  sub_B3D0(&v11);
  v8 = v13;
  if ( !v13 )
    return 2;
  v9 = *(_DWORD *)(v13 + 1344);
  return (v9 == -1 || !(unsigned int)sub_1F860(v13, v9, a2, a3, a4, 0))
      && (unsigned int)sub_1F860(v8, *a1, a2, a3, a4, 0) == 0;
}

