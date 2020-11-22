
uint8_t sm_add_chan_ctx(uint8_t * p_chan_idx);
void sm_assoc_done(uint16_t aid);
void sm_assoc_req_send(void);
void sm_assoc_rsp_handler(rxu_mgt_ind * param);
void sm_auth_handler(rxu_mgt_ind * param);
void sm_auth_send(uint16_t auth_seq, uint32_t * challenge);
void sm_bss_config_push(void * param);
void sm_connect_ind(uint16_t status);
void sm_deauth_cfm(void * env, uint32_t status);
int sm_deauth_handler(rxu_mgt_ind * param);
void sm_delete_resources(vif_info_tag * vif);
void sm_disconnect(uint8_t vif_index, uint16_t reason_code);
void sm_disconnect_process(vif_info_tag * vif, uint16_t reason);
void sm_frame_tx_cfm_handler(void * env, uint32_t status);
void sm_get_bss_params(mac_addr * * bssid, scan_chan_tag * * chan);
void sm_handle_supplicant_result(uint8_t sta_id, uint16_t reason_code);
void sm_join_bss(mac_addr * bssid, scan_chan_tag * chan, _Bool passive);
void sm_scan_bss(mac_addr * bssid, scan_chan_tag * chan);
void sm_send_next_bss_param(void);
void sm_set_bss_param(void);
void sm_supplicant_deauth_cfm(void * env, uint32_t status);
