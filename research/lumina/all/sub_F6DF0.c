__int64 __fastcall sub_F6DF0(__int64 a1, unsigned __int8 *a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebp
  __int64 v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-38h]
  __int64 v19; // [rsp+8h] [rbp-30h]

  v9 = *(_QWORD *)(a1 + 24);
  if ( v9 )
  {
    v19 = a6;
    v18 = a5;
    xmmword_241500(v9);
    a6 = v19;
    a5 = v18;
  }
  v10 = sub_F6B70(a1, a2, a3, a4, a5, a6);
  if ( *(_BYTE *)(a1 + 103) || (v15 = 0, v10) )
  {
    a2 = (unsigned __int8 *)v10;
    v15 = sub_D42C0(a1, v10, v11, v12, v13, v14);
  }
  v16 = *(_QWORD *)(a1 + 24);
  if ( v16 )
    xmmword_241510(v16, a2, v11);
  return v15;
}
