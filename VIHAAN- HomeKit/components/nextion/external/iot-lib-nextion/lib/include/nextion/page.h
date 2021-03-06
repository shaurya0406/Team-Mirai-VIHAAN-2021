#ifndef __NEXTION_OP_PAGE_H__
#define __NEXTION_OP_PAGE_H__

#include <stdint.h>
#include "base/codes.h"
#include "base/types.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /**
     * @brief Get the active page id.
     * @param handle Nextion context pointer.
     * @return NEX_OK or NEX_FAIL.
     */
    nex_err_t nextion_page_get(nextion_handle_t handle, uint8_t *page_id);

    /**
     * @brief Changes to another page.
     * @param handle Nextion context pointer.
     * @param page_name_or_id Page's name or id.
     * @return NEX_OK or NEX_DVC_ERR_INVALID_PAGE.
     */
    nex_err_t nextion_page_set(nextion_handle_t handle, const char *page_name_or_id);

    /**
     * @brief Refreshes the current page.
     * @param handle Nextion context pointer.
     * @return NEX_OK or NEX_FAIL.
     */
    nex_err_t nextion_page_refresh(nextion_handle_t handle);

#ifdef __cplusplus
}
#endif

#endif //__NEXTION_OP_PAGE_H__