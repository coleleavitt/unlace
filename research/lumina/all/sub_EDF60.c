unsigned __int64 __fastcall sub_EDF60(__int64 *a1, double a2, __int64 a3, __int64 *a4, int a5, int a6, int a7)
{
  __int64 v8; // rdi
  unsigned __int8 *v9; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  unsigned __int8 *v17; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-10h]

  v8 = *a4;
  v18 = __readfsqword(0x28u);
  v9 = (unsigned __int8 *)sub_D9DB0(v8, 1u, a2, (__int64)a4, a5, a6, a7);
  v17 = v9;
  if ( v9 && *v9 )
  {
    v11 = sub_C2340(&v17);
    v16 = *a1;
    if ( (*(_WORD *)(*a1 + 20) & 0x9000) != 0 )
    {
      sub_C9430(v16, v11, v12, v13, v14, v15);
    }
    else
    {
      *(_QWORD *)v16 = v11;
      *(_WORD *)(v16 + 20) = 4;
    }
  }
  return __readfsqword(0x28u) ^ v18;
}
