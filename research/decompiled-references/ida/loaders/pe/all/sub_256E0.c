__int64 __fastcall sub_256E0(__int64 a1, int a2, _DWORD *a3, char *a4, int a5, _DWORD *a6, __int64 *a7, _DWORD *a8)
{
  __int64 v12; // rdi
  unsigned int v13; // edx
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // rdi
  char *v18; // rcx
  char *v20; // [rsp+10h] [rbp-88h] BYREF
  __int128 v21; // [rsp+18h] [rbp-80h]
  unsigned int v22[10]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *(_WORD *)a4 = 0;
  if ( a6 )
    *a6 = 0;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  v12 = *(_QWORD *)(a1 + 8);
  v13 = 1;
  if ( *(_BYTE *)(v12 + 472) )
  {
    if ( (unsigned __int8)sub_227B0(v12, v12 + 472, (a2 & 0xFFFFFFu) - 1, (__int64)v22) )
    {
      if ( a3 )
        *a3 = sub_22C80(*(_QWORD *)(a1 + 8), 0x68u, v22[0]);
      v15 = v22[1];
      v20 = 0;
      v21 = 0;
      v16 = qvector_reserve();
      v17 = *(_QWORD *)(a1 + 8);
      v20 = (char *)v16;
      sub_230E0(v17, v15, (__int64 *)&v20);
      v18 = (char *)s1;
      if ( (_QWORD)v21 )
        v18 = v20;
      sub_25360(a4, a5, a6, v18);
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree();
      }
      if ( (unsigned __int8)sub_232E0(*(_QWORD *)(a1 + 8), v22[2], a7, a8, 0) )
        return 0;
      else
        return (unsigned int)-2147467259;
    }
    else
    {
      return (unsigned int)-2147024883;
    }
  }
  return v13;
}
