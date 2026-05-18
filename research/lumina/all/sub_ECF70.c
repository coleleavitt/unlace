__int64 __fastcall sub_ECF70(__int64 *a1, unsigned int a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // ebp
  __int64 v14; // rdi
  unsigned int v16; // eax

  v7 = *a1;
  v10 = *(_QWORD *)(*a1 + 24);
  if ( v10 )
  {
    xmmword_241500(v10);
    v7 = *a1;
  }
  v11 = 18;
  if ( *(int *)(v7 + 136) < a3
    || (v16 = sub_ECF00(a1, a2, a3), v7 = *a1, v11 = v16, *(_BYTE *)(*a1 + 103))
    || (v13 = 0, v16) )
  {
    v12 = sub_D42C0(v7, v11, a3, v7, a5, a6);
    v7 = *a1;
    v13 = v12;
  }
  v14 = *(_QWORD *)(v7 + 24);
  if ( v14 )
    xmmword_241510(v14, v11, a3);
  return v13;
}
