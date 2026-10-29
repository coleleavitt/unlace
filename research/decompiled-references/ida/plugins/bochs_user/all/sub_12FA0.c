void __fastcall sub_12FA0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  void (*v4)(void); // rax

  if ( a3 )
  {
    v3 = *(_QWORD *)(a1 + 1072);
    if ( v3 )
    {
      v4 = *(void (**)(void))(*(_QWORD *)v3 + 72LL);
      if ( v4 != nullsub_11 )
        v4();
    }
  }
}

