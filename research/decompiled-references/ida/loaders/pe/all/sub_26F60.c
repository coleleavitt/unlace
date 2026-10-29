unsigned __int64 __fastcall sub_26F60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rdi
  unsigned int v10; // eax
  int v11; // edx
  unsigned int v12; // eax
  int v14; // [rsp+Ch] [rbp-2Ch] BYREF
  __int64 v15; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  if ( a5 | a6 | a7 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v14 = *(_DWORD *)(a2 + 8);
    v10 = sub_23B30(v7, a4, a3, &v15, &v14, a6);
    v11 = v14;
    if ( a5 )
      *(_DWORD *)a5 = v14;
    v12 = v10 >> 1;
    if ( v11 != 14 )
      v12 = 0;
    if ( a6 )
      *(_QWORD *)a6 = v15;
    if ( a7 )
      *(_DWORD *)a7 = v12;
  }
  return v16 - __readfsqword(0x28u);
}
