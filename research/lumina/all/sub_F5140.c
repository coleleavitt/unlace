unsigned __int64 __fastcall sub_F5140(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5, int a6, double a7)
{
  __int64 v8; // rdi
  __int64 v9; // r14
  int v10; // eax
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  _QWORD v21[2]; // [rsp+0h] [rbp-58h] BYREF
  int v22; // [rsp+10h] [rbp-48h]
  int v23; // [rsp+14h] [rbp-44h]
  int v24; // [rsp+18h] [rbp-40h]
  __int16 v25; // [rsp+1Ch] [rbp-3Ch]
  unsigned __int64 v26; // [rsp+28h] [rbp-30h]

  v8 = *a3;
  v26 = __readfsqword(0x28u);
  v9 = sub_EDD90(v8, a7, a2, (__int64)a3, a4, a5, a6);
  v10 = *(_DWORD *)(v9 + 24);
  v25 = 0;
  v21[1] = 0;
  v21[0] = 0;
  v22 = 0;
  v24 = 0;
  v11 = *(_BYTE *)(v9 + 28) == 0;
  v23 = 100 * (v10 + 1);
  if ( v11 )
    v12 = *(unsigned int *)(v9 + 12);
  else
    v12 = *(unsigned int *)(v9 + 8);
  sub_DBBA0((__int64)v21, "%llu", v12);
  if ( *(int *)(v9 + 24) > 0 )
  {
    v17 = 0;
    do
    {
      v18 = v17++;
      v19 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v9 + 40) + 4 * v18) + 1);
      sub_DBBA0((__int64)v21, " %llu", (v19 + *(unsigned int *)(v9 + 12) - 1) / v19);
    }
    while ( *(_DWORD *)(v9 + 24) > v17 );
  }
  sub_F5060(a1, (__int64)v21, v13, v14, v15, v16);
  return __readfsqword(0x28u) ^ v26;
}
