__int64 __fastcall sub_2E80(_QWORD *a1)
{
  _QWORD *v1; // r12
  _QWORD *v3; // rbp
  void (__fastcall *v4)(_QWORD *); // rax
  __int64 v5; // rdi
  __int64 result; // rax

  v1 = a1 + 16;
  *a1 = &off_9A98;
  sub_6220(a1 + 16);
  clr_module_data((unsigned int)dword_B280);
  v3 = (_QWORD *)a1[24];
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(_QWORD *))(*v3 + 40LL);
    if ( v4 == sub_2A50 )
    {
      v5 = v3[5];
      *v3 = off_9A58;
      if ( v5 )
      {
        v3[6] = 0;
        qfree();
      }
      if ( v3[2] )
      {
        v3[3] = 0;
        qfree();
      }
      operator delete(v3, 0x50u);
    }
    else
    {
      v4((_QWORD *)a1[24]);
    }
  }
  a1[21] = &off_9D40;
  remove_event_listener(a1 + 21);
  a1[18] = &off_9D40;
  remove_event_listener(a1 + 18);
  result = sub_6220(v1);
  if ( a1[13] )
  {
    a1[14] = 0;
    return qfree();
  }
  return result;
}
