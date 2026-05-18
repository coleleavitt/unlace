void __fastcall sub_11D2F0(__int64 *a1, __int64 a2)
{
  char v2; // al
  __int64 **v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rsi

  v2 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 1 )
  {
    v13 = *(_QWORD **)(a2 + 40);
    if ( v13 )
    {
      v14 = *a1;
      v15 = *(_QWORD *)(a2 + 40);
      sub_D6CE0(*a1, v15);
      sub_C91C0(v13[8], v15);
      sub_C9250(v14, v13);
      *(_QWORD *)(a2 + 40) = 0;
    }
  }
  else if ( v2 )
  {
    if ( v2 == 2 )
    {
      v4 = *(__int64 ***)(a2 + 40);
      v5 = **v4;
      --*((_DWORD *)*v4 + 2);
      (*(void (**)(void))(v5 + 56))();
    }
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 40);
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v6 + 32);
      if ( *(_BYTE *)(v7 + 17) )
        sub_CC740(*(_QWORD *)(v6 + 8));
      v9 = *(_QWORD *)(v8 + 16);
      v10 = *(_QWORD *)(v9 + 40);
      if ( v6 == v9 )
      {
        *(_QWORD *)(v8 + 16) = v10;
      }
      else
      {
        while ( v6 != v10 )
        {
          if ( !v10 )
            goto LABEL_14;
          v9 = v10;
          v10 = *(_QWORD *)(v10 + 40);
        }
        *(_QWORD *)(v9 + 40) = *(_QWORD *)(v6 + 40);
      }
LABEL_14:
      if ( *(char *)(v6 + 84) >= 0 )
        sub_CCD80(v6);
      if ( !*(_BYTE *)(v8 + 36) )
        sub_10F950((__int64 (__fastcall **)())(v8 + 24), a2);
      sub_C91C0(*(_QWORD *)(v6 + 16), a2);
      sub_C91C0(*(_QWORD *)(v6 + 24), a2);
      if ( (*(_BYTE *)(v8 + 32) & 4) != 0 && !*(_QWORD *)(v8 + 16) )
      {
        sub_11C990(v7);
      }
      else if ( *(_BYTE *)(v7 + 17) )
      {
        if ( (*(_DWORD *)(v7 + 20))-- == 1 )
          sub_CC7D0(v7, a2, v11);
      }
      *(_QWORD *)(v6 + 8) = 0;
    }
  }
}
