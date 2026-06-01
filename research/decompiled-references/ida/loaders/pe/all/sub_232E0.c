__int64 __fastcall sub_232E0(__int64 a1, unsigned int a2, __int64 *a3, _DWORD *a4, _QWORD *a5)
{
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  unsigned int v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v13 = 0;
  v8 = sub_231F0(a1, a2, (int *)&v13, 3u);
  v14 = 0;
  v9 = sub_23020(a1, 3u, v8, &v14);
  if ( !v9 )
    return 1;
  v10 = v13;
  v11 = 0;
  if ( v14 >= v13 )
  {
    if ( a3 )
      *a3 = v9;
    if ( a4 )
      *a4 = v10;
    if ( a5 )
      *a5 = v10 + v9;
    return 1;
  }
  return v11;
}
