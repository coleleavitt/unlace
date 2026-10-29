__int64 __fastcall ps_pdwrite(unsigned int *a1, __int64 a2, _DWORD *a3, int a4)
{
  unsigned int v5; // eax
  __int64 result; // rax
  __int64 (__fastcall **v8)(_QWORD, __int64); // [rsp+0h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-40h]
  __int64 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v5 = *a1;
  v11 = __readfsqword(0x28u);
  v10 = 0;
  v8 = (__int64 (__fastcall **)(_QWORD, __int64))&off_44D48;
  v9 = v5;
  sub_B3D0(&v8);
  if ( !v10 )
    return 2;
  result = 1;
  if ( !*(_BYTE *)(v10 + 1349) && *(_DWORD *)(v10 + 1340) != -1 )
    return (int)sub_207D0(v10, *a1, a2, a3, a4, 0) <= 0;
  return result;
}

