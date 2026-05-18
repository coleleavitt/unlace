__int64 __fastcall sub_11B330(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rbp

  v5 = *(_QWORD **)(a1 + 280);
  if ( qword_2424C0 )
    qword_2424C0(a1, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 168);
  if ( v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 32);
      sub_C91C0(v6, a2);
      v6 = v7;
    }
    while ( v7 );
  }
  *(_BYTE *)(a1 + 8) = 0;
  if ( !a2 || (*(_BYTE *)(a2 + 49) & 8) != 0 || (unsigned int)sub_C35E0(a1) )
    v8 = 0;
  else
    v8 = (__int64)v5;
  sub_11B160(*(_QWORD *)(a1 + 296), a2, *(unsigned __int8 *)(a1 + 15), *(_DWORD *)(a1 + 200), v8);
  *(_QWORD *)(a1 + 296) = 0;
  sub_CBBE0(a1);
  if ( *(_BYTE *)(a1 + 19) )
  {
    v12 = a1;
    sub_CC460(a1, a2);
  }
  else
  {
    if ( **(_QWORD **)(a1 + 80) )
    {
      v11 = sub_C35A0(a1);
      v9 = (unsigned __int8)v11;
      if ( (unsigned __int8)v11 == 13 || (unsigned __int8)v11 == 10 )
      {
        a2 = v11;
        sub_CC130(a1, v11);
      }
    }
    v12 = a1;
    sub_10F340(a1, a2, v9, v10);
  }
  if ( qword_2424C8 )
    qword_2424C8(v12, a2);
  v14 = *(_QWORD *)(a1 + 80);
  if ( *(_QWORD *)v14 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*(_QWORD *)(a1 + 80));
    *(_QWORD *)v14 = 0;
  }
  v15 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)v15 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 8LL))(*(_QWORD *)(a1 + 72));
    *(_QWORD *)v15 = 0;
  }
  sub_CBC10(v5, a2, v13);
  ((void (__fastcall *)(_QWORD))*(&xmmword_241578 + 1))(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 64LL));
  sub_C91C0(a1, a2);
  return 0;
}
