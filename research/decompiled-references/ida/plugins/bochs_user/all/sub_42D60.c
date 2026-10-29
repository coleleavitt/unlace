__int64 __fastcall sub_42D60(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // r15
  __int64 v7; // r13
  const char *v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rbp
  unsigned int v11; // ebx
  unsigned __int64 v13; // r13
  _QWORD *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v22; // [rsp+18h] [rbp-768h]
  __int64 v23; // [rsp+30h] [rbp-750h] BYREF
  __int128 v24; // [rsp+38h] [rbp-748h] BYREF
  __int64 v25; // [rsp+48h] [rbp-738h] BYREF
  __int128 v26; // [rsp+50h] [rbp-730h]
  _QWORD v27[72]; // [rsp+68h] [rbp-718h] BYREF
  _DWORD v28[144]; // [rsp+2A8h] [rbp-4D8h] BYREF
  _QWORD v29[83]; // [rsp+4E8h] [rbp-298h] BYREF

  v4 = *(_QWORD *)(qword_753F8 + 4832);
  v5 = *(_BYTE *)(qword_753F8 + 121);
  v29[75] = __readfsqword(0x28u);
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( (unsigned int)sub_26860(v4, (__int64)&v25) )
  {
    v8 = "call_bochs: could not save breakpoints state";
LABEL_10:
    sub_EB00((__int64)"AUTOHIDE REGISTRY\nCould not call bochs function: %s", v8);
    v9 = v25;
    v11 = 1;
    goto LABEL_11;
  }
  v7 = v25;
  if ( 16LL * (_QWORD)v26 )
  {
    do
    {
      sub_26CB0(v4, v7, 0);
      v7 += 16;
    }
    while ( v7 != v25 + 16LL * (_QWORD)v26 );
  }
  v8 = "call_bochs: failed to setup control breakpoint";
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**(_QWORD **)(qword_753F8 + 48) + 72LL))(
         *(_QWORD *)(qword_753F8 + 48),
         24,
         *(_QWORD *)(qword_753F8 + 5488),
         &v23) )
  {
    BYTE14(v24) = 112;
    *(_QWORD *)&v24 = v23;
    v8 = "call_bochs:  failed to create control breakpoint";
    if ( !(unsigned int)sub_26A90(v4, (__int64)&v24) )
    {
      LODWORD(v27[0]) = 25;
      if ( (unsigned int)sub_25D90(v4, v27) )
      {
        v8 = "call_bochs: failed to saved context";
      }
      else
      {
        v13 = ((-(__int64)(v5 == 0) & 0xFFFFFFFFFFFFFFFCLL) + 8) * (a2 + 1);
        v14 = (_QWORD *)qalloc();
        if ( v14 )
        {
          if ( a3 && (*a3 & 1) != 0 )
          {
            qmemcpy(v28, a3, 0x238u);
            *(_QWORD *)&v28[9] = *(_QWORD *)((char *)&v27[4] + 4);
          }
          else
          {
            qmemcpy(v28, v27, 0x238u);
          }
          v15 = *(_QWORD *)(qword_753F8 + 5488);
          if ( v5 )
          {
            *v14 = v15;
            if ( a2 )
            {
              *(_QWORD *)&v28[3] = *a4;
              if ( a2 != 1 )
              {
                *(_QWORD *)&v28[5] = a4[1];
                if ( a2 != 2 )
                {
                  *(_QWORD *)&v28[17] = a4[2];
                  if ( a2 != 3 )
                    *(_QWORD *)&v28[19] = a4[3];
                }
              }
              v16 = 1;
              do
              {
                v14[v16] = a4[v16 - 1];
                v17 = v16++;
              }
              while ( a2 != v17 );
            }
          }
          else
          {
            *(_DWORD *)v14 = v15;
            if ( a2 )
            {
              v19 = 1;
              do
              {
                *((_DWORD *)v14 + v19) = a4[v19 - 1];
                v20 = v19++;
              }
              while ( a2 != v20 );
            }
          }
          v22 = (__int64)v14;
          *(_QWORD *)&v28[33] = a1;
          v18 = *(_QWORD *)(qword_753F8 + 48);
          *(_QWORD *)&v28[9] -= v13;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 72LL))(
                  v18,
                  24,
                  *(_QWORD *)&v28[9],
                  &v23)
            || (unsigned int)sub_26D50(v4, v23, v22, v13) )
          {
            v8 = "call_bochs: could not prepare calling stack";
          }
          else
          {
            sub_25E50(v4, (__int64)v28, v5);
            v8 = "call_bochs: could not resume execution";
            if ( !(unsigned int)sub_25D80(v4) )
            {
              if ( (unsigned int)sub_27640(v4, v29) )
              {
                v8 = "call_bochs: failed to return to control breakpoint";
              }
              else
              {
                if ( a3 )
                  sub_25D90(v4, a3);
                v8 = "call_bochs: failed to restore context";
                if ( !(unsigned int)sub_25E50(v4, (__int64)v27, v5) )
                  v8 = nullptr;
              }
            }
          }
          qfree();
        }
        else
        {
          v8 = "call_bochs: Not enough memory for parameters";
        }
      }
    }
  }
  if ( (_QWORD)v24 )
    sub_26B80(v4, (__int64)&v24);
  v9 = v25;
  v10 = v25;
  if ( 16LL * (_QWORD)v26 )
  {
    do
    {
      sub_26CB0(v4, v10, *(_BYTE *)(v10 + 15));
      v9 = v25;
      v10 += 16;
    }
    while ( v10 != v25 + 16LL * (_QWORD)v26 );
  }
  v11 = 0;
  if ( v8 )
    goto LABEL_10;
LABEL_11:
  if ( v9 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return v11;
}

