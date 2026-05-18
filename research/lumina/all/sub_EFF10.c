int __fastcall sub_EFF10(__int64 a1, _DWORD *a2, char *a3, unsigned int a4, char *a5, unsigned int a6, double a7)
{
  __int64 v10; // r10
  __int64 v11; // r9
  char *v12; // r10
  char *v13; // r9
  int v14; // ebx
  int v15; // r13d
  int v16; // edx
  int result; // eax
  __int64 v18; // rdi
  __int64 *v19; // rbx
  char *v22; // [rsp+10h] [rbp-58h]
  char *v23; // [rsp+10h] [rbp-58h]
  char *v24; // [rsp+18h] [rbp-50h]
  char *v25; // [rsp+18h] [rbp-50h]
  int v26; // [rsp+20h] [rbp-48h] BYREF
  int v27; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v10 = (unsigned __int8)*a5;
  v28 = __readfsqword(0x28u);
  v11 = (unsigned __int8)*a3;
  v12 = &a5[v10];
  v26 = (unsigned __int8)a3[1];
  v13 = &a3[v11];
  if ( v26 > 127 )
  {
    v25 = v12;
    v23 = v13;
    sub_CB760(a3 + 1, &v26);
    v12 = v25;
    v13 = v23;
  }
  v14 = (unsigned __int8)a5[1];
  v27 = v14;
  if ( v14 > 127 )
  {
    v24 = v12;
    v22 = v13;
    sub_CB760(a5 + 1, &v27);
    v14 = v27;
    v12 = v24;
    v13 = v22;
  }
  v15 = v26;
  v16 = v14;
  if ( v26 <= v14 )
    v16 = v26;
  result = memcmp(v13, v12, (v16 - 13) / 2);
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL);
  if ( result || (result = v15 - v14, v15 != v14) )
  {
    if ( **(_BYTE **)(v18 + 24) )
      return -result;
  }
  else if ( *(_WORD *)(v18 + 6) > 1u )
  {
    v19 = *(__int64 **)(a1 + 24);
    if ( !*a2 )
    {
      sub_CD5F0((_BYTE *)(v18 + 4), (__int64 *)(v18 + 16), a6, a5, *(_QWORD *)(a1 + 24));
      *a2 = 1;
    }
    return sub_EE540(a4, a3, v19, 1, a7);
  }
  return result;
}
