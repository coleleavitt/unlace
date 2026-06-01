__int64 __fastcall sub_228E60(__int64 a1, int a2, __int64 a3, int a4, double a5)
{
  unsigned __int64 v5; // rbx
  int v6; // r15d
  unsigned int v7; // eax
  __int64 v8; // r12
  int *v9; // r14
  int v11; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-40h]

  v5 = a2;
  v12 = __readfsqword(0x28u);
  v6 = a4;
  v11 = 0;
  if ( a4 == -1 )
    v6 = 1;
  copy_argloc();
  v7 = *(_DWORD *)(a1 + 72);
  if ( v7 <= 0x10 )
    v7 = getinf();
  if ( v7 != 176 && v7 != 256 )
    getinf_flag();
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 440) )
  {
LABEL_14:
    LODWORD(v5) = -1;
  }
  else
  {
    v8 = 104LL * a2;
    while ( 1 )
    {
      v9 = (int *)(v8 + *(_QWORD *)(a1 + 432));
      if ( sub_228C90(a1, (__int64)v9, a5) )
      {
        if ( (unsigned __int8)sub_1C4AE0(v9, v9[22], &v11, v6, a5) )
          break;
      }
      ++v5;
      v8 += 104;
      if ( v5 >= *(_QWORD *)(a1 + 440) )
        goto LABEL_14;
    }
  }
  cleanup_argloc();
  return (unsigned int)v5;
}

