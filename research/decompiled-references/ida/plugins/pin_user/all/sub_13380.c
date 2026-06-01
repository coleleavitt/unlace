__int64 __fastcall sub_13380(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6, __int64 a7)
{
  char v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int64 v16; // [rsp-10h] [rbp-50h]
  __int64 v17; // [rsp-8h] [rbp-48h]

  qmutex_lock();
  sub_130C0(a1);
  v9 = sub_1DC20((int)a1 + 952, a2, a3, a5, a7, a1, a6, 0);
  v12 = v16;
  if ( v9
    && (((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(1033, a2, &callui, v17, v10, v11),
        (unsigned __int8)sub_18E80(a1 + 952)) )
  {
    v13 = 1;
  }
  else
  {
    v13 = -1;
  }
  v14 = sub_1CCC0(a1 + 952, a2, v12);
  sub_23380(a1, v14);
  qmutex_unlock();
  return v13;
}

