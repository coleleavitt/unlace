__int64 __fastcall sub_C4210(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int *v3; // r14
  unsigned int *v4; // r13
  unsigned int *v5; // rbp
  unsigned int *v6; // rbx
  _QWORD *v7; // r15
  unsigned int *v8; // rax
  __int64 v9; // rax
  int v11; // [rsp+1Ch] [rbp-4Ch] BYREF
  _QWORD v12[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a2 + 4;
  v4 = a3 + 4;
  v5 = a2;
  v6 = a3;
  v12[1] = __readfsqword(0x28u);
  v7 = v12;
  v12[0] = 0;
  v11 = 0;
  while ( 1 )
  {
    while ( (*(int (__fastcall **)(__int64, int *, unsigned int *, _QWORD, unsigned int *, _QWORD))(a1 + 64))(
              a1,
              &v11,
              v3,
              *v5,
              v4,
              *v6) > 0 )
    {
      *v7 = v6;
      v8 = *((unsigned int **)v6 + 1);
      v7 = v6 + 2;
      v11 = 0;
      if ( !v8 )
      {
        *((_QWORD *)v6 + 1) = v5;
        return v12[0];
      }
      v6 = v8;
      v4 = v8 + 4;
    }
    *v7 = v5;
    v9 = *((_QWORD *)v5 + 1);
    v7 = v5 + 2;
    if ( !v9 )
      break;
    v5 = *((unsigned int **)v5 + 1);
    v3 = (unsigned int *)(v9 + 16);
  }
  *((_QWORD *)v5 + 1) = v6;
  return v12[0];
}
