void __fastcall sub_26460(_QWORD *a1, _QWORD *a2, int a3)
{
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rax
  unsigned int *v9; // r14
  _BYTE *v10; // rax
  _BYTE *v11; // rdx
  __int64 v12; // rsi
  _BYTE *v13; // [rsp+8h] [rbp-30h]

  if ( a1[1] )
  {
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = (_QWORD *)a1[3];
        if ( v7 )
        {
          v8 = v7[2];
          if ( v8 )
          {
            v9 = (unsigned int *)(*a1 + 16 * v6);
            if ( *v9 < (unsigned __int64)(v8 - 1) )
            {
              v10 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
              v11 = v10;
              if ( v10 )
              {
                if ( *v10 && (~*((_BYTE *)v9 + 4) & 0xE) == 0 && ((v9[1] & 0x11) == 1 || *((_BYTE *)v9 + 5)) )
                  break;
              }
            }
          }
        }
        if ( ++v6 >= a1[1] )
          return;
      }
      v12 = *((_QWORD *)v9 + 1) + a2[5];
      if ( a3 == 12 && *((_BYTE *)v9 + 5) == 1 )
      {
        v13 = v10;
        (*(void (__fastcall **)(_QWORD *, __int64, _BYTE *, bool))(*a2 + 40LL))(
          a2,
          v12,
          v10,
          (*((_WORD *)v9 + 3) & 0xF) == 8);
        v11 = v13;
      }
      ++v6;
      (*(void (__fastcall **)(_QWORD *, __int64, _BYTE *))(*a2 + 8LL))(a2, v12, v11);
    }
    while ( v6 < a1[1] );
  }
}

