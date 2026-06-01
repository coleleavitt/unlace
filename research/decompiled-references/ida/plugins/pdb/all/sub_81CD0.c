__int64 __fastcall sub_81CD0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v7; // r13
  __int64 (__fastcall *v8)(__int64, __int64, __int64, __int64); // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned int *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx

  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 40LL);
  if ( v8 == sub_81000 )
  {
    if ( !*(_BYTE *)(a1 + 56) )
    {
LABEL_3:
      sub_37FD0(*(__int64 **)(a1 + 8), (__int64)"COFF failed to read %llu bytes", a3);
      return 0;
    }
    if ( v7 != qlseek(*(_QWORD *)(a1 + 24), v7, 0, a4) )
    {
      sub_37FD0(*(__int64 **)(a1 + 8), (__int64)"COFF failed to seek at 0x%llX", v7);
      goto LABEL_3;
    }
  }
  else if ( !((unsigned __int8 (__fastcall *)(__int64, _QWORD))v8)(a1, *(_QWORD *)(a1 + 40)) )
  {
    goto LABEL_3;
  }
  if ( a3 != qlread(*(_QWORD *)(a1 + 24), a2, a3) )
    goto LABEL_3;
  v10 = *(_QWORD *)(a1 + 40);
  v11 = *(unsigned int *)(a1 + 32);
  v12 = a3 + v10;
  if ( (_DWORD)v11 != -1 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 496LL) + 24 * v11;
    v14 = *(unsigned int **)v13;
    v15 = *(_QWORD *)v13 + 12LL * *(_QWORD *)(v13 + 8);
    if ( v15 != *(_QWORD *)v13 )
    {
      do
      {
        v16 = *v14;
        if ( v16 >= v10 && v16 < v12 )
        {
          v17 = v16 - v10;
          if ( *((_WORD *)v14 + 4) == 1 )
          {
            if ( a3 >= v17 + 2 )
            {
              *(_WORD *)(a2 + v17) = *((_WORD *)v14 + 2);
              v10 = *(_QWORD *)(a1 + 40);
              v12 = a3 + v10;
            }
          }
          else if ( a3 >= v17 + 4 )
          {
            *(_DWORD *)(a2 + v17) = v14[1];
            v10 = *(_QWORD *)(a1 + 40);
            v12 = a3 + v10;
          }
        }
        v14 += 3;
      }
      while ( (unsigned int *)v15 != v14 );
    }
  }
  *(_QWORD *)(a1 + 40) = v12;
  return 1;
}

